L=["digital", "lync", "hyderabad", "gachibowli", "kukatpally"]
A="Lync"
j=0
for i in range(0,(len(L)-1)):
	if(L[i]==A):
		print("String is present in the list")
		j=1
		break
if(j==0):
	print("String is not present in the list")