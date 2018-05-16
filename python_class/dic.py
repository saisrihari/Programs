# mydic={}
# for i in range(5):
# 	key=int(input('Enter a key value:'))
# 	value=str(input('Enter your name:'))
# 	mydic[key]=value
# print(mydic.items())
# mydic.popitem()
# print(mydic.values())
# mydic.update(4,'fg')
# print(mydic.keys())

# l1=[1,2,3,4]
# l2=['py','cpp','java','c']
# for i,j in l1,l2:
# 	d[i]=j
# print(d)

# l1=['py','java','cpp','cv2','php','.net']
# l2=[1,2,5]
# l3=[]
# l4=[]
# for i in l2:
# 	l3.append(l1[i])
# print(l3)
# for i in l1:
# 	if i not in l3:
# 		l4.append(i)
# print(l4)

# d={}
# for i in range(6):
# 	n=int(input('Enter a number'))
# 	d[n]=n*n
# print(d)
		
# l1=[1,2,1,3,4,1,5,3]
# l2=[]
# count=[0,0,0,0,0,0,0,0]
# for i in l1:
# 	if i not in l2:
# 		l2.append(i)
# print(l2)
# l4=[]
# for i in l2:
# 	for j in l1:
# 		if i==j:
# 			count[i]+=1
# for i in range(len(count)):
# 	if count[i]>1:
# 		l4.append(i)
# print(l4)