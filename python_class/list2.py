l1=[1,1,1,2,2,4,3,5]
l2=set(l1)
count=[0,0,0,0,0,0,0,0]
l4=[]
for i in l2:
	for j in l1:
		if i==j:
			count[i]+=1
for i in range(len(count)):
	if count[i]>1:
		l4.append(i)
print(l4)