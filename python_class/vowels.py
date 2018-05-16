a=str(input('Enter a character'))
if(65<=ord(a)<=90):
	if(a=="A" or a=="E" or a=="I" or a=="O" or a=="U"):
			print("you entered uppercase vowels")
	else:
		print("you entered uppercase consonants")
if(97<=ord(a)<=122):
	if(a=="a" or a=="e" or a=="i" or a=="o" or a=="u"):
		print("you entered lowercase vowels")
	else:
		print("you entered lowercase consonants")