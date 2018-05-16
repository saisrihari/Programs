import random

def chargen(length):

	a=""

	for k in range(0,length//2,1):

		a+=chr(random.randrange(65,90))

		a+=chr(random.randrange(97,123))

	return a

def intgen(length):

	a=""

	for j in range(length):

		a+=str(random.randrange(0,9))

	return a		