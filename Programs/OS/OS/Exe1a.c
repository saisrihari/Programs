/* C PROGRAM TO IMPLEMENT ROUND ROBIN ALGORITHM */
#include<stdio.h>
void main(){
	int n,i,pos=2,bt[10],need[10],tat[10],wt[10],tq,t=0;
	float twt=0,ttat=0,avgwt,avgtat;
	printf("\n ::ROUND ROBIN ALGORITHM:: \n");
	printf("\n Enter No of Processes:\t");
	scanf("%d",&n);
	printf("\n Enter %d Processes Burst Time:\n",n);
	for(i=1;i<=n;i++){
		scanf("%d",&bt[i]);
		need[i]=bt[i];	
	}
	printf("\n Enter Time Quantum:\t");
	scanf("%d",&tq);
	for(i=1;i<=n;i++){
		if(bt[i]>bt[pos])
			pos=i;	
	}
	do{
		for(i=1;i<=n;i++){
			if(need[i]>=tq){
				t=t+tq;
				tat[i]=t;
				need[i]=need[i]-tq;			
			}
			else if(need[i]>0){
				t=t+need[i];
				tat[i]=t;
				need[i]=0;			
			}		
		}	
	}while(need[pos]>0);
	for(i=1;i<=n;i++){
		wt[i]=tat[i]-bt[i];
		twt=twt+wt[i];
		ttat=ttat+tat[i];	
	}
	avgwt=twt/n;
	avgtat=ttat/n;
	printf("\n Process\t BurstTime \t WaitTime \t TAT");
	for(i=1;i<=n;i++)
		printf("\n P%d \t\t %d \t\t %d \t\t %d",i,bt[i],wt[i],tat[i]);
	printf("\n---------------------------------------------------------------------------------");
	printf("\n Total Waiting Time:%f",twt);
	printf("\n Total TAT=%f",ttat);
	printf("\n Avg of WaitingTime:%f",avgwt);
	printf("\n Avg of Turn Around Time:%f \n",avgtat);
}

/* 
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe1a.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 ::ROUND ROBIN ALGORITHM:: 

 Enter No of Processes:	4

 Enter 4 Processes Burst Time:
6
5
3
5

 Enter Time Quantum:	3

 Process	 BurstTime 	 WaitTime 	 TAT
 P1 		 6 		 9 		 15
 P2 		 5 		 12 		 17
 P3 		 3 		 6 		 9
 P4 		 5 		 14 		 19
---------------------------------------------------------------------------------
 Total Waiting Time:41.000000
 Total TAT=60.000000
 Avg of WaitingTime:10.250000
 Avg of Turn Around Time:15.000000 
*/
