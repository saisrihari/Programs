/* C PROGRAM TO IMPLEMENT FCFS(FIRST COME FIRST SERVER) SCHEDULING ALGORITHM */
#include<stdio.h>
void main(){
	int n,i,b[10],p[10],j,temp,w[10],tat[10],t1=0,t=0,temp2,temp3,pr[10];
	printf("\n ::FCFS(FIRST COME FIRST SERVER) SCHEDULING ALGORITHM:: ");
	printf("\n No Of Processes:\t");
	scanf("%d",&n);
	printf("\n Enter Burst times: \n");
	for(i=1;i<=n;i++){
		scanf("%d",&b[i]);
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
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe1c.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 ::FCFS(FIRST COME FIRST SERVER) SCHEDULING ALGORITHM:: 
 No Of Processes:	4

 Enter Burst times: 
6
5
3
5

 Process	 BurstTime	 WaitingTime	 TAT
 P0		 6		 0		 6
 P0		 5		 6		 11
 P0		 3		 11		 14
 P0		 5		 14		 19
------------------------------------------------------------------
 Total WaitingTime:31
 Total TAT:50
 Avg of WaitingTime:7.750000
 Avg of TAT:12.500000 
*/
