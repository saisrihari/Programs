num=int(input('Enter a number:'))
sums=0
while (True):
	digit=num%10
	sums+=digit
	num=int(num/10)
	if(digit==0):
		break
print(sums)