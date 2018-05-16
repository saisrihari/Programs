import gen as g
d={}
f=open("passwd.txt",'a')
def check(ai):
	# if ai in d.keys():
	# 	return False
	# else:
	# 	return True
	f1=open("passwd.txt",'r')
	l=f1.readlines()
	s=[]
	b=[]
	for i in range(len(l)):
		a=l[i].split("--")
		s.append(a)
		b.append(s[i][0])
	for i in range(len(b)):
		if b[i]==ai:
			return False
	return True
def verify(ai):
	c=""
	if check(ai):
		c=g.chargen(4)+g.intgen(8)+g.chargen(4)
		d[ai]=c
		print("username is %s \npasswd:%s"%(ai,d[ai]))
	else:
		print("User already exists...!")
def insert():
	for i in d.keys():
		f.write(i)
		f.write('--')
		f.write(d[i])
		f.write('\n')
	f.close()