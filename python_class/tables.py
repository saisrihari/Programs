import sys
for i in range(1,int(sys.argv[2])+1):
	#print(sys.argv[1],"x",i,"=",(int(sys.argv[1])*i))
	print("%sx%d=%d"%(sys.argv[1],i,(int(sys.argv[1])*i)))