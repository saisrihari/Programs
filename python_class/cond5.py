num1=int(input('Enter a number:'))
num2=int(input('Enter a number:'))
num3=int(input('Enter a number:'))
if(num1>num2 and num1>num3):
	print("%d is the largest number"%(num1))
elif(num2>num3):
	print("%d is the largest number"%(num2))
else:
	print("%d is the largest number"%(num3))