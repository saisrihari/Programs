a=int(input('Enter a number:'))
b=a
d=0
while(b>0):
	c=b%10
	d+=c*c*c
	b=int(b/10)
if(d==a):
	print("It is a armstrong number")
else:
	print("It's not a armstrong number")