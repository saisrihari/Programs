# class Error(Exception):
# 	'''This is the base class exception'''
# class UnderAgeError(Error):
# 	'''This is error is raised when the age of the person is less than the determined'''
# class OverAgeError(Error):
# 	'''This is error is raised when the age of the person is more than the determined'''
# class NotYetBornError(Error):
# 	'''The person is not Born'''
# age=26
# while True:
# 	try:
# 		inputage=int(input('Enter the age of the person:'))
# 		if inputage<=0:
# 			raise NotYetBornError
# 		elif inputage>age:
# 			raise OverAgeError
# 		elif inputage<age:
# 			raise UnderAgeError
# 		break

# 	except NotYetBornError:
# 		print("The person is not born")
# 	except UnderAgeError:
# 		print(UnderAgeError.__doc__)
# 	except OverAgeError:
# 		print("The person is over aged")
# 	finally:
# 		print("You entered some age")
# print("You have sucessfully determined")

# class Error(Exception):
#  	'''This is the base class exception'''

# def div():
# 	try:
# 		a=5/0
# 	except Exception as e:
# 		print(e)
# div()

# try:
# 	num=input()
# 	from math import math
# except EOFError :
# 	print("EOFError")
# except ImportError:
# 	print("There is no math module in math")