print("Write a program to check whether the given string present in the sequence or not.L=[͞digital͟, ͟lync͟, ͟hyderabad͟, ͟gachibowli͟, ͟kukatpally͟] A=͟Lync͟")
L=["digital", "lync", "hyderabad", "gachibowli", "kukatpally"]
A="Lync"
j=0
for i in range(0,(len(L)-1)):
	if(L[i]==A):
		print("String is present in the list")
		j=1
		break
if(j==0):
	print("String is not present in the list")
print('Bitwise operations on 45 & 65')
print("45 & 65 is",(45 & 65))
print("45 | 65 is",(45 | 65))
print("45 ^ 65 is",(45 ^ 65))
print("~45 is",(~45))
print("~65 is",(~65))
print("45 >> 2 is",(45 >> 2))
print("65 >> 2 is",(65 >> 2))
print("45 << 2 is",(45 << 2))
print("65 << 2 is",(65 << 2))
print("Sum of digits in integer")
a=int(input('Enter first value:'))
b=int(input('Enter second value:'))
print("Sum of  a and b is ",(a+b))
print("Comparsion operation on 15 and 2")
print("15 == 2",(15==2))
print("15 != 2",(15!=2))
print("15 > 2",(15>2))
print("15 < 2",(15<2))
print("15 >= 2",(15>=2))
print("15 <= 2",(15<=2))
print("Convert the given value into integer, double, complex and calculate absolute value,factorial, square root, exponent of that value.Given z=65.33")
import math
a=65.33
print(int(a))
print(a)
print(complex(a))
print(math.sqrt(a))
print(math.factorial(int(a)))
print(math.exp(a))
print(abs(a))