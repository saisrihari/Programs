n=int(input('Enter in which range you want the multiples of 9:'))
for i in range(1,n+1):
	if(i%9==0):
		print(i,end=",")
print()