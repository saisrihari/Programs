a=int(input('Enter a positive number:'))
d=0
for i in range(2,int((a/2)+1)):
	if(a%i==0):
		d=1
		break
if(d!=0):
	print("It is not a prime number")
else:
	print("It is a prime number")