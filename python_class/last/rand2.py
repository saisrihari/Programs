import random
d=open('passwd.txt','a')
c=""
for i in range(2):
	for k in range(4):
		b=chr(random.randrange(97,123))
		c+=b
	for j in range(4):
		a=str(random.randrange(0,9))
		c+=a
print(c)
d.writelines(c)
d.writelines('\n')
