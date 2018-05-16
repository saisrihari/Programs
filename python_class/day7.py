# fp1=open('test1.txt','r')
# fp1.seek(0,0)
# count=0
# for i in range(120):
# 	c=fp1.read(1)
# 	if c=='\n':
# 		count+=1
# 	if count==4:
# 		break
# d=fp1.tell()
# print(d)
# fp1.close()
# fp=open('test1.txt','a')
# pos2 = fp.seek(d)
# print(pos2)
# fp.write('hello')
# fp.close()

f = open("test1.txt", "r")
lines = f.readlines()
f.close()

lines.insert(4,'hello')

f = open("test1.txt", "w")
lines = "".join(lines)
f.write(lines)
f.close()