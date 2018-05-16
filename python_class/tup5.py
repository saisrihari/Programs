l=[1,2,3,4,(5,6),7,8]
cnt=0
for i in l:
	if isinstance(i,tuple):
		break
	else:
		cnt+=1
print(cnt)