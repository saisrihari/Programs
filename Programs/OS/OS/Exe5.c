/* C PROGRAM TO IMPLEMENT BANKER'S ALGORITHM FOR DEADLOCK PREVENTION */
#include<stdio.h>
void main()
{
	int max[10][10],al[10][10],av[10],i,j,k,m,n,ne[10][10],flag=0;
	printf("\n :: BANKER'S ALGORITHM FOR DEADLOCK PREVENTION :: \n");
	printf("\n Enter the Matrics Dimensions:");
	scanf("%d %d",&m,&n);
	printf("\n Enter the Maximum Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&max[i][j]);		
		}	
	}
	printf("\n Enter Allocated Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&al[i][j]);		
		}
	}
	printf("\n The Need Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			ne[i][j]=max[i][j]-al[i][j];
			printf("\t %d",ne[i][j]);		
		}
		printf("\n");
	}
	printf("\n Enter Avaliable Matrix:\n");
	for(i=0;i<n;i++)
		scanf("%d",&av[i]);
	printf("\n Maximum Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\t %d",max[i][j]);		
		}
		printf("\n");	
	}
	printf("\n Allocated Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\t %d",al[i][j]);		
		}
		printf("\n");
	}
	printf("\n Avaliable Matrix:\n");
	for(i=0;i<n;i++)
		printf("%d\t",av[i]);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(av[i]>=ne[i][j])
				flag=1;
			else
				flag=0;		
		}
	}
	printf("\n Status:");
	if(flag==0)
		printf(" Unsafe State \n");
	else
		printf(" Safe State \n");
	
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe5.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 :: BANKER'S ALGORITHM FOR DEADLOCK PREVENTION :: 

 Enter the Matrics Dimensions:3 3

 Enter the Maximum Matrix:
3 6 8
4 3 3
3 4 4

 Enter Allocated Matrix:
2 2 3
2 0 3
1 2 4

 The Need Matrix:
	 1	 4	 5
	 2	 3	 0
	 2	 2	 0

 Enter Avaliable Matrix:
2 3 0

 Maximum Matrix:
	 3	 6	 8
	 4	 3	 3
	 3	 4	 4

 Allocated Matrix:
	 2	 2	 3
	 2	 0	 3
	 1	 2	 4

 Avaliable Matrix:
2	3	0	
 Status: Safe State 
*/
