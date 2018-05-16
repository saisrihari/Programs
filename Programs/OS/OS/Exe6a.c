/* C PROGRAM TO SIMULATE FIFO PAGE REPLACEMENT ALGORITHM */
#include<stdio.h>
void main()
{
	int i,j,k,pf=0,count=0,rs[25],m[10],n,f;
	printf("\n Enter the length of the Reference string: ");
	scanf("%d",&n);
	printf("\n Enter the Reference String:");
	for(i=0;i<n;i++)
		scanf("%d",&rs[i]);
	printf("\n Enter number of Frames:");
	scanf("%d",&f);
	for(i=0;i<f;i++)
		m[i]=-1;
	printf("\n ::FIFO Page Replacement Process:: \n");
	for(i=0;i<n;i++){
		for(k=0;k<f;k++){
			if(m[k]==rs[i])
				break;
		}
		if(k==f){
			m[count++]=rs[i];
			pf++;
		}
		for(j=0;j<f;j++){
			printf("\t%d",m[j]);
		}
		if(k==f)
			printf("\t Page Fault=%d",pf);
		printf("\n");
		if(count==f)
			count=0;
	}
	printf("\n Total No Of Page Faults=%d \n",pf);
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe6a.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 Enter the length of the Reference string: 20

 Enter the Reference String:7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1

 Enter number of Frames:3

 ::FIFO Page Replacement Process:: 
	7	-1	-1	 Page Fault=1
	7	0	-1	 Page Fault=2
	7	0	1	 Page Fault=3
	2	0	1	 Page Fault=4
	2	0	1
	2	3	1	 Page Fault=5
	2	3	0	 Page Fault=6
	4	3	0	 Page Fault=7
	4	2	0	 Page Fault=8
	4	2	3	 Page Fault=9
	0	2	3	 Page Fault=10
	0	2	3
	0	2	3
	0	1	3	 Page Fault=11
	0	1	2	 Page Fault=12
	0	1	2
	0	1	2
	7	1	2	 Page Fault=13
	7	0	2	 Page Fault=14
	7	0	1	 Page Fault=15

 Total No Of Page Faults=15 
*/
