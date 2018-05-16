s1=set(str(input("Enter first string:")))
count=0
for i in s1:
	if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u'):
		count+=1
print("No of Vowels in string are:%s"%(count))
