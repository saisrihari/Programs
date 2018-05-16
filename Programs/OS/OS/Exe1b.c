/* C PROGRAM TO IMPLEMENT SJF(SHORTEST JOB FIRST) SCHEDULING ALGORITHM */
#include<stdio.h>
void main(){
	int n,i,b[10],p[10],j,temp,w[10],tat[10],t1=0,t=0,temp2;
	printf("\n ::SJF(SHORTEST JOB FIRST) SCHEDULING ALGORITHM:: ");
	printf("\n No Of Processes:\t");
	scanf("%d",&n);
	printf("\n Enter Burst times: \n");
	for(i=1;i<=n;i++){
		scanf("%d",&b[i]);
		p[i]=i;	
	}
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++){
			if(b[i]>b[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
				temp2=p[i];
				p[i]=p[j];
				p[j]=temp2;			
			}		
		}
	w[1]=0;
	for(i=1;i<=n;i++)
		w[i+1]=w[i]+b[i];
	for(i=1;i<=n;i++){
		tat[i]=w[i]+b[i];
		t=t+tat[i];
		t1=t1+w[i];	
	}
	printf("\n Process\t BurstTime\t WaitingTime\t TAT");
	for(i=1;i<=n;i++)
		printf("\n P%d\t\t %d\t\t %d\t\t %d",p[i],b[i],w[i],tat[i]);
	printf("\n------------------------------------------------------------------");
	printf("\n Total WaitingTime:%d",t1);
	printf("\n Total TAT:%d",t);
	printf("\n Avg of WaitingTime:%f",(float)t1/n);
	printf("\n Avg of TAT:%f \n",(float)t/n);
}
/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe1b.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 ::SJF(SHORTEST JOB FIRST) SCHEDULING ALGORITHM:: 
 No Of Processes:	4

 Enter Burst times: 
3
6
4
2

 Process	 BurstTime	 WaitingTime	 TAT
 P4		 2		 0		 2
 P1		 3		 2		 5
 P3		 4		 5		 9
 P2		 6		 9		 15
------------------------------------------------------------------
 Total WaitingTime:16
 Total TAT:31
 Avg of WaitingTime:4.000000
 Avg of TAT:7.750000 
*/
