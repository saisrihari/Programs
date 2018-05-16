f=open("result.txt","w")
class Arthi:
	def add_n(self,a,b):
		return a+b
	def sub_n(self,a,b):
		return a-b
	def mul_n(self,a,b):
		return a*b
	def div_n(self,a,b):
		return a/b
class Log:
	def and_n(self,a,b):
		return a and b
	def or_n(self,a,b):
		return a or b
	def not_n(self,a):
		return not a
a=int(input('Enter a value:'))
b=int(input('Enter b value:'))
ob1=Arthi()
result=ob1.add_n(a,b)
f.write(str(result)+"\n")
result=ob1.sub_n(a,b)
f.write(str(result)+"\n")
result=ob1.mul_n(a,b)
f.write(str(result)+"\n")
result=ob1.div_n(a,b)
f.write(str(result)+"\n")
ob2=Log()
result=ob2.and_n(a,b)
f.write(str(result)+"\n")
result=ob2.or_n(a,b)
f.write(str(result)+"\n")
result=ob2.not_n(a)
f.write(str(result)+"\n")

# f1=open("passwd.txt",'r')
# l=f1.readlines()
# s=[]
# b=[]
# for i in range(len(l)):
# 	a=l[i].split("--")
# 	s.append(a)
# 	b.append(s[i][0])
# print(b) 