#!/usr/bin/env ruby
#Author - R3dy - http://www.pentestgeek.com
#This script grabs Employee Names & Titles from www.jigsaw.com
# 2012, June 7th.  Edit - Now grabs all records from jigsaw, not just first 50
#   Example Syntas:
#    ./jigsaw.rb CompanyName
require 'net/http'
require 'optparse'
#company = ARGV[0]
RECORDS = Array.new

options = {}
args = OptionParser.new do |opts|
        opts.banner = "Jigsaw 1.0 ( http://www.pentestgeek.com )\r\n"
        opts.banner += "Usage: jigsaw [options]\r\n\r\n"
        opts.banner += "\texample: jigsaw -s Google\r\n\r\n"
        opts.on("-i", "--id [Jigsaw Company ID]", "The Jigsaw ID to use to pull records") {|id| options[:id] = id}
        opts.on("-s", "--search [Company Name]", "Name of organization to search for") {|company| options[:company] = company}
end

args.parse!(ARGV)

def get_target_id(target)
	companyId = ""
	uri = URI('http://www.jigsaw.com/FreeTextSearch.xhtml')
	params = { :opCode => "search", :autoSuggested => "true", :freeText => target }
	uri.query = URI.encode_www_form(params)
	response = Net::HTTP.get_response(uri)
	unless response.body.include?("Company Search Results")
		response.body.split("\r\n").each do |line|
			if line.include?("view more and edit")
     			companyId = line.split("/")[1].to_s.gsub(/id/, "")
   			end
  		end
  		return companyId
  	end
  	puts "Your search returned more then one company\r\n"
  	get_company_list(response.body)
end

def get_company_list(body)
	company, id, newrec = "", "", ""
	companys = Array.new
	ids = Array.new
	searchresults = Array.new
	body.split("</a></td>").each do |line|
		if line.include?("=") && !line.include?("text/html")
			company = line.split("=")[18].to_s.split("'")[1].to_s.chomp unless line.split("=")[18].to_s.chomp.split("'")[1].to_s == ""
			id = line.split("=")[5].split("&")[0].split("\r\n")[0].split("'")[0] unless line.split("=")[5].split("&")[0].split("\r\n")[0].split("'")[0] == ""
			newrec = id.to_s. + " - " + company.to_s unless ids.include?(id.to_s)
			searchresults << newrec unless searchresults.include?(newrec)
			ids << id unless ids.include?(id)
			companys << company unless companys.include?(company)
		end
	end
	searchresults.each do |rec|
		puts rec unless rec == ""
	end
	exit!
end

def get_employees(id)
	uri = URI('http://www.jigsaw.com/SearchContact.xhtml')
	params = { :companyId => id, :opCode => "showCompDir", :rpage => "1", :rowsPerPage => "50" }
	uri.query = URI.encode_www_form(params)
	response = Net::HTTP.get_response(uri)
	pages = get_number_of_pages(get_number_of_records(response.body)) / 50
	puts "Found #{get_number_of_records(response.body)} records on #{pages.to_s} pages:\r\n" unless !get_number_of_records(response.body)
	pages.times do |page|
		page = page + 1
		get_each_page(page.to_s, id)
	end
end

def get_each_page(page, id)
	onerec = ""
	puts "Extracting individual employee records from page #{page.to_s}\r\n"
	uri = URI('http://www.jigsaw.com/SearchContact.xhtml')
        params = { :companyId => id.chomp, :opCode => "showCompDir", :rpage => page, :rowsPerPage => "50" }
        uri.query = URI.encode_www_form(params)
        response = Net::HTTP.get_response(uri)
		response.body.split("/tr").each do |line|
        	if line.include?("input type=\'checkbox\'")
            	onerec << line.split("title=")[3].split("'")[1] + "\t-\t" + line.split("title=")[2].split(">")[1].split("<")[0] + "\r\n"
				RECORDS << onerec.to_s unless RECORDS.include?(onerec)
        	end
        end	
end

def get_number_of_pages(records)
	recordsroundedup = (records.to_i + 100) / 100 * 100
	return recordsroundedup
end

def get_number_of_records(body)
	recordstrue = ""
	body.split(";").each do |line|
		recordstrue = line.split("+")[1].split('"')[1].to_s.chomp if line.include?("Your search returned") && !line.include?("at least")
	end
	if recordstrue.include?(",")
		recordstrue = recordstrue.gsub(/,/, "")
	end
	if recordstrue == ""
		puts "Dit not find any records\r\n"
		exit!
	else
		return recordstrue
	end
end

def dump_records(records)
	puts "Dumping records...\r\n"
	puts records
end

if options[:company]
	puts "Jigsaw ID for #{options[:company]} is: " + get_target_id(options[:company])
elsif options[:id]
	get_employees(options[:id].to_s.chomp)
	dump_records(RECORDS)
end
