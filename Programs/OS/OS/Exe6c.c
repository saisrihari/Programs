/* C PROGRAM TO SIMULATE LFU(LEAST FREQUENTLY USED) PAGE REPLACEMENT ALGORITHM */
#include<stdio.h>
void main()
{
	int i,j,k,min,rs[25],pf=0,cntr[25],flag[25],a[25],n,f;
	printf("\n Enter the length of the Reference string: ");
	scanf("%d",&n);
	printf("\n Enter the Reference String:");
	for(i=0;i<n;i++)
		scanf("%d",&rs[i]);
	printf("\n Enter number of Frames:");
	scanf("%d",&f);
	for(i=0;i<f;i++){
		cntr[i]=0;
		a[i]=-1;
	}
	printf("\n ::LFU Page Replacement Process:: \n");
	for(i=0;i<n;i++){
		for(j=0;j<f;j++){
			if(a[j]==rs[i]){
				cntr[j]++;
				flag[i]=0;
				break;
			}
		}
		if(j==f){
			min=0;
			for(k=1;k<f;k++)
				if(cntr[k]<cntr[min])
					min=k;
			a[min]=rs[i];
			cntr[min]=1;
			flag[i]=1;
			pf++;
		}
		printf("\n");
		for(j=0;j<f;j++){
			printf("%d\t",a[j]);
		}
		if(flag[i]==1)
			printf("\t Page Fault=%d",pf);

	}
	printf("\n Total No Of Page Faults=%d \n",pf);
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe6c.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 Enter the length of the Reference string: 12

 Enter the Reference String:1 2 3 4 5 2 5 2 5 1 4 3

 Enter number of Frames:3

 ::LFU Page Replacement Process:: 

1	-1	-1		 Page Fault=1
1	2	-1		 Page Fault=2
1	2	3		 Page Fault=3
4	2	3		 Page Fault=4
5	2	3		 Page Fault=5
5	2	3	
5	2	3	
5	2	3	
5	2	3	
5	2	1		 Page Fault=6
5	2	4		 Page Fault=7
5	2	3		 Page Fault=8
 Total No Of Page Faults=8 
*/
