print("1.Fahrenheit to Celsius")
print("2.Celsius to Fahrenheit")
opt=int(input('Enter you option:'))
if opt==1 or opt==2:
	if opt==1:
		Fahrenheit = int(input("Enter a temperature in Fahrenheit: "))
		Celsius = (Fahrenheit - 32) * 5.0/9.0
		print ("Temperature:", Fahrenheit, "Fahrenheit = ", Celsius, " C")
	if opt==2:	
		Celsius = int(input("Enter a temperature in Celsius: "))
		Fahrenheit = 9.0/5.0 * Celsius + 32
		print ("Temperature:", Celsius, "Celsius = ", Fahrenheit, " F")
else:
	print("You have choosen a wrong option")