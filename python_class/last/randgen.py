import sys,random
n=int(sys.argv[1])
for i in range(n):
	print(random.randrange(0,9),end="")
print()
for i in range(n):
	print(chr(random.randrange(97,123)),end="")
print()