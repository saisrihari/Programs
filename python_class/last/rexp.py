import re
# doc='''Dave Martin
# 615-555-7164
# 173 Main St., Springfield RI 55924
# davemartin@bogusemail.com

# Charles Harris
# 800-555-5669
# 969 High St., Atlantis VA 34075
# charlesharris@bogusemail.com

# Eric Williams
# 560-555-5153
# 806 1st St., Faketown AK 86847
# laurawilliams@bogusemail.com

# Corey Jefferson
# 900-555-9340
# 826 Elm St., Epicburg NE 10671
# coreyjefferson@bogusemail.com'''
f=open("data.txt",'r')
text=f.read()
a=re.compile(r'[\w\.]+@[\w\.]+')
match=a.finditer(text)
for i in match:
	print(i)
b=re.sub("bogusemail","gmail" ,text)
for i in b:
	print(i,end="")