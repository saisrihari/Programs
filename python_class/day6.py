# def ka(a,b,**kwargs):
# 	sum=a+b
# 	count=0
# 	for i in kwargs.values():
# 		sum=sum+i
# 		count=count+1
# 	avg=sum/(count+2)
# 	print(avg)
# ka(a=10,b=20,c=30,d=40,e=50)

# def cake_order(weight="2kgs",shape="Square",flavour="pineapple"):
# 	print(" You ordered %s of %s flavour in %s shape"%(weight,flavour,shape))
# cake_order(weight="2kgs",shape="Round",flavour="Chocolate")
# cake_order(weight="5kgs",flavour="pineapple")
# cake_order(weight="2kgs",shape="Round")
# cake_order(shape="Square",flavour="Chocolate")
# cake_order(weight="10kgs")
# cake_order()

# def avg_n(a,b,*args):
# 	sum=a+b
# 	count=0
# 	for i in list(args):
# 		for j in i:
# 			sum=sum+j
# 			count=count+1
# 	print(sum/(count+2))
# avg_n(10,20,[1,2,3,4])

def hi(**kwargs):
	for i,j in kwargs.items():
		print("Hi i am {} from {}".format(i,j))
hi(superman="usa",batman="pk",ironman="uk")
# import random
# from random import Random,shuffle,randint,randrange,choice
# a=random.randint(0,5)
# print(a)
# a=random.choice([1,2,3,4,5,6])
# print(a)
# a=random.randrange(5)
# print(a)
# a=random.random()
# print(a)
# x=[3,4,2,75,7]
# random.shuffle(x)
# print(x)
# import calendar
# for i in range(1,13):
# 	print(calendar.month(2018,i))
# print(calendar.calendar(2018)