# ruby program on complex class
class Sample
   def hello
  puts "Hello Ruby!"
  puts Complex(0.3)         #=> (0.3+0i)
 puts Complex('0.3-0.5i')  #=> (0.3-0.5i)
 puts Complex('2/3+3/4i')  #=> ((2/3)+(3/4)*i)
 puts Complex('1@2')       #=> (-0.4161468365471424+0.9092974268256817i)
 puts 0.3.to_c             #=> (0.3+0i)
 puts '0.3-0.5i'.to_c      #=> (0.3-0.5i)
   end
end
# Now using above class to create objects
object = Sample. new
object.hello
