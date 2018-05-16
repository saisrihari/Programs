/* C PROGRAM TO IMPLEMENT SEQUENCED FILE ALLOCATION STRATEGY */
#include<stdio.h>
void main()
{
	int n,i,j,b[20],sb[20],t[20],c[20][20];
	printf("\n ::SEQUENCED FILE ALLOCATION STRATEGY:: \n");
	printf("\n Enter no of files:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter no of blocks occupied by file %d:",i+1);
		scanf("%d",&b[i]);
		printf("\n Enter starting block of file %d:",i+1);
		scanf("%d",&sb[i]);
		t[i]=sb[i];
		for(j=0;j<b[i];j++)
			c[i][j]=sb[i]++;
	}
	printf("\nFilename\tStartBlock\tLength\n");
	for(i=0;i<n;i++)
		printf("%d\t\t%d\t\t%d\n",i+1,t[i],b[i]);
	for(i=0;i<n;i++)
	{
		printf("\n--------------------------------------------------------\n");
		printf("\n Filename is %d",i+1);
		printf("\n Length is %d",b[i]);
		printf("\n Blocks occupied:");
		for(j=0;j<b[i];j++)
			printf("%4d",c[i][j]);
		printf("\n--------------------------------------------------------\n");
	}
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe7a.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 ::SEQUENCED FILE ALLOCATION STRATEGY:: 

 Enter no of files:2

 Enter no of blocks occupied by file 1:3

 Enter starting block of file 1:10

 Enter no of blocks occupied by file 2:5

 Enter starting block of file 2:17

Filename	StartBlock	Length
1		10		3
2		17		5

--------------------------------------------------------

 Filename is 1
 Length is 3
 Blocks occupied:  10  11  12
--------------------------------------------------------

--------------------------------------------------------

 Filename is 2
 Length is 5
 Blocks occupied:  17  18  19  20  21
--------------------------------------------------------
*/
	
