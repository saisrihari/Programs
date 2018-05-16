def fact(n):
	if n==1:
		return n
	else:
		return n*fact(n-1)

n=int(input("enter the a positive number:"))
if n==0:
	print("Factorial of %d is 1"%(n))
else:
	print("Factorial of %d is %d"%(n,fact(n)))