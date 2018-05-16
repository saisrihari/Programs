/* C PROGRAM TO IMPLEMENT LINKED FILE ALLOCATION STRATEGY */
#include<stdio.h>
void main()
{
	int i,j,n,b[10],sb[10],c[20][20];
	printf("\n ::LINKED FILE ALLOCATION STRATEGY:: \n");
	printf("\n Enter number of files:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter file%d starting block:",i+1);
		scanf("%d",&sb[i]);
		printf("\n Enter number of blocks:");
		scanf("%d",&b[i]);
		printf("\n Enter block numbers:");
		for(j=1;j<=b[i];j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	printf("\nFile\tSTARTING BLOCK\tLENGTH\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t\t%d\t\t%d\t",i+1,sb[i],b[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("\n File%d linked with %d",i+1,sb[i]);
		for(j=1;j<=b[i];j++)
			printf("----->%d",c[i][j]);
		printf("\n");
	}
}

/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe7c.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 ::LINKED FILE ALLOCATION STRATEGY:: 

 Enter number of files:3

Enter file1 starting block:10

 Enter number of blocks:3

 Enter block numbers:100 200 300

Enter file2 starting block:20

 Enter number of blocks:4

 Enter block numbers:25 35 45 55 

Enter file3 starting block:30

 Enter number of blocks:2

 Enter block numbers:1 2

File	   STARTING BLOCK     LENGTH

1		10		3	
2		20		4	
3		30		2	

 File1 linked with 10----->100----->200----->300

 File2 linked with 20----->25----->35----->45----->55

 File3 linked with 30----->1----->2
*/
