def find(l1,k):
	print("index is=",l1.index(k))
	print("value is=",k)
l1=[]
for i in range(6):
	print("If you want to enter 1.integer 2.string 3.complex 4.float")
	op=int(input('Enter an option'))
	if op==1:
		k=int(input('Enter a value in list:'))
		l1.append(k)
	elif op==2:
		k=str(input('Enter a value in list:'))
		l1.append(k)
	elif op==3:
		k=complex(input('Enter a value in list:'))
		l1.append(k)
	elif op==4:
		k=float(input('Enter a value in list:'))
		l1.append(k)
	else:
		print("wrong choice.")
print(l1)
print("If you want to find 1.integer 2.string 3.complex 4.float")
op=int(input('Enter an option'))
if op==1:
	k=int(input('Enter a value in list'))
	find(l1,k)
elif op==2:
	k=str(input('Enter a value in list'))
	find(l1,k)
elif op==3:
	k=complex(input('Enter a value in list'))
	find(l1,k)
elif op==4:
	k=float(input('Enter a value in list'))
	find(l1,k)
else:
	print("wrong choice.")


