def cal():
	''' 		Menu
	1.Arthimetic
	2.Comparison
	3.Logical
	4.Bitwise
	5.Assignment
	6.Special
	7.exit
	Select which operator you want to go on....'''
	print(cal.__doc__)
def arth():
	'''
	1.Addition
	2.Subtraction
	3.Multipilcation
	4.Divison
	5.Modulus
	6.Floor Divison
	7.Exponent
	8.Main menu
	Select which opertion you want to go on...'''
	print(arth.__doc__)
def com():
	'''
	1.Greater Than(>)
	2.Less Than(<)
	3.Equal to(==)
	4.Not Equal to(!=)
	5.Greater Than or Equal to(>=)
	6.Less Than or Equal to(<=)
	7.main menu
	Select which operation you want to go on with...'''
	print(com.__doc__)
def log():
	'''
	1.And
	2.Or
	3.Not
	4.main menu
	Select which operation you want to go on with...
	'''
	print(log.__doc__)
def bit():
	'''
	1.Bitwise And(&)
	2.Bitwise Or(|)
	3.Bitwise Not(~)
	4.Bitwise XOR(^)
	5.Bitwise right shift(>>)
	6.Bitwise left shift(<<)
	7.main menu
	Select which operation you want to go on with...
	'''
	print(bit.__doc__)
def asst():
	'''
	1.=
	2.+=
	3.-=
	4.*=
	5./=
	6.%=
	7.//=
	8.**=
	9.&=
	10.|=
	11.^=
	12.>>=
	13.<<=
	14.main menu
	Select Which operation you want to go on with...
	'''
	print(asst.__doc__)
def spec():
	'''
	1.identity
	2.membership
	3.main menu
	Select which operation you want to go on with...
	'''
	print(spec.__doc__)
def id():
	'''
	1.is 
	2.is not
	3.before menu
	4.exit
	Select which opration you want to go on with...
	'''
	print(id.__doc__)
def mem():
	'''
	1.in
	2.not in
	3.before menu
	4.exit
	Select which operation you want to go on with...
	'''
	print(mem.__doc__)
while(1):
	cal()
	opt=int(input('Enter your option:'))
	while(1):
		if opt==1:
			arth()
			a1=int(input('Enter your choice:'))
			if a1==1:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("Addition is:",(a+b))
			elif a1==2:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("Subtraction is:",(a-b))
			elif a1==3:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("Multipilcation is:",(a*b))
			elif a1==4:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("Divison is:",(a/b))
			elif a1==5:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("Modulus is:",(a%b))
			elif a1==6:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("Floor Divison is:",(a//b))
			elif a1==7:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("Exponent is:",(a**b))
			elif a1==8:
				break
			else:
				print("wrong choice")	
		elif opt==2:
			com()
			c1=int(input('Enter your choice:'))
			if c1==1:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a Greater Than b is:",(a>b))
			elif c1==2:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a Less Than b is:",(a<b))
			elif c1==3:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a is Equal to b is:",(a==b))
			elif c1==4:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a is Not Equal b is:",(a!=b))
			elif c1==5:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a is Greater Than & Equal to b is:",(a>=b))
			elif c1==6:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a is Less Than & Equal to b is:",(a<=b))
			elif c1==7:
				break
			else:
				print("wrong choice")				
		elif opt==3:
			log()
			l1=int(input('Enter your choice:'))
			if l1==1:
				a=int(input('Enter a value(True or False):'))
				b=int(input('Enter b value(True or False):'))
				print("a And b is:",(a and b))
			elif l1==2:
				a=int(input('Enter a value(True or False):'))
				b=int(input('Enter b value(True or False):'))
				print("a Or b is:",(a or b))
			elif l1==3:
				a=int(input('Enter a value(True or False):'))
				print("not a is:",(not a))
			elif l1==4:
				break
			else:
				print("wrong choice")
		elif opt==4:
			bit()
			b1=int(input('Enter your choice:'))
			if b1==1:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a & b is:",(a&b))
			elif b1==2:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a | b is:",(a|b))
			elif b1==3:
				a=int(input('Enter a value:'))
				print("~ a is:",(~a))
			elif b1==4:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a ^ b is:",(a^b))
			elif b1==5:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a >> b is:",(a>>b))
			elif b1==6:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				print("a << b is:",(a<<b))
			elif b1==7:
				break
			else:
				print("wrong choice.")
		elif opt==5:
			asst()
			t1=int(input('Enter your choice:'))
			if t1==1:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a=b
				print("a is:",a)
			elif t1==2:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a+=b
				print("a += b is:",a)
			elif t1==3:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a-=b
				print("a -= b is:",a)
			elif t1==4:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a*=b
				print("a*=b is :",a)
			elif t1==5:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a/=b
				print("a/=b is:",a)
			elif t1==6:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a%=b
				print("a%=b is:",a)
			elif t1==7:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a//=b
				print("a//=b is:",a)
			elif t1==8:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a**=b
				print("a**=b is:",a)				
			elif t1==9:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a&=b
				print("a&=b is:",a)				
			elif t1==10:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a|=b
				print("a|=b is:",a)				
			elif t1==11:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a^=b
				print("a^=b is:",a)				
			elif t1==12:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a>>=b
				print("a>>=b is:",a)				
			elif t1==13:
				a=int(input('Enter a value:'))
				b=int(input('Enter b value:'))
				a<<=b
				print("a<<=b is:",a)				
			elif t1==14:				
				break
			else:
				print("wrong choice")	
		elif opt==6:
			spec()
			s1=int(input('Enter your choice:'))
			if s1==1:
				id()
				while(1):
					i1=int(input('Enter your choice:'))
					if i1==1:
						a=int(input('Enter a value:'))
						b=int(input('Enter b value:'))
						print("a is b is:",(a is b))
					elif i1==2:
						a=int(input('Enter a value:'))
						b=int(input('Enter b value:'))
						print("a is not b is:",(a is not b))
					elif i1==3:
						break
					elif i1==4:
						exit()
					else:
						print("wrong choice")
			elif s1==2:
				mem()
				while(1):
					m1=int(input('Enter your choice:'))
					if m1==1:
						a=[1,2,3,4,5,6]
						b=int(input('Enter b value:'))
						print("a in b is:",(b in a))
					elif m1==2:
						a=list(i for i in range(0,7))
						b=int(input('Enter b value:'))
						print("a not in b is:",(b not in a))
					elif m1==3:
						break
					elif m1==4:
						exit()
					else:
						print("wrong choice")
			else:
				break
		elif opt==7:
			exit()
		else:
			print("wrong option.")