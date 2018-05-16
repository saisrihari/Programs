/* C PROGRAM TO IMPLEMENT INDEXED FILE ALLOCATION STRATEGY */
#include<stdio.h>
void main()
{
	int n,m[20],i,j,ib[20],b[20][20];
	printf("\n ::INDEXED FILE ALLOCATION STRATEGY:: \n");
	printf("\n Enter no of files:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter index block of file%d:",i+1);
		scanf("%d",&ib[i]);
		printf("\n Enter block occupied by file%d:",i+1);
		scanf("%d",&m[i]);
		printf("\n Enter blocks of file%d:",i+1);
		for(j=0;j<m[i];j++)
			scanf("%d",&b[i][j]);
	}
	printf("\nFile\t\tIndex\t\tLength\n");
	for(i=0;i<n;i++)
		printf("%d\t\t%d\t\t%d\n",i+1,ib[i],m[i]);
	for(i=0;i<n;i++)
	{
		printf("\n File name is %d",i+1);
		printf("\n File%dindex%d is occupied with",i+1,ib[i]);
		for(j=0;j<m[i];j++)
			printf("%5d",b[i][j]);
	}
	printf("\n");
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe7b.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 ::INDEXED FILE ALLOCATION STRATEGY:: 

 Enter no of files:3

 Enter index block of file1:10

 Enter block occupied by file1:3

 Enter blocks of file1:100 101 102

 Enter index block of file2:11

 Enter block occupied by file2:4

 Enter blocks of file2:20 21 22 23

 Enter index block of file3:12

 Enter block occupied by file3:2

 Enter blocks of file3:35 36

File		Index		Length
1		10		3
2		11		4
3		12		2

 File name is 1
 File1index10 is occupied with  100  101  102
 File name is 2
 File2index11 is occupied with   20   21   22   23
 File name is 3
 File3index12 is occupied with   35   36
*/

