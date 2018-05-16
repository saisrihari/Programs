n=int(input('Enter a number'))
flag1=0
flag2=0
for i in range(0,n):
	if(i%2!=0):
		flag1+=1
	else:
		flag2+=1
print("Count of even number between the range is %d"%(flag2))
print("Count of odd number between the range is %d"%(flag1))