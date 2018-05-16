/* C PROGRAM TO IMPLEMENT PRIORITY SCHEDULING ALGORITHM */
#include<stdio.h>
void main(){
	int n,i,b[10],p[10],j,temp,w[10],tat[10],t1=0,t=0,temp2,temp3,pr[10];
	printf("\n ::PRIORITY SCHEDULING ALGORITHM:: ");
	printf("\n No Of Processes:\t");
	scanf("%d",&n);
	printf("\n Enter Burst times: \n");
	for(i=1;i<=n;i++){
		scanf("%d",&b[i]);
		p[i]=i;	
	}
	printf("\n Enter Priorities: \n");
	for(i=1;i<=n;i++){
		scanf("%d",&pr[i]);
	}
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++){
			if(pr[i]>pr[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
				temp2=p[i];
				p[i]=p[j];
				p[j]=temp2;
				temp3=pr[i];
				pr[i]=pr[j];
				pr[j]=temp3;			
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
	printf("\n Process\t BurstTime\t Priority\t WaitingTime\t TAT");
	for(i=1;i<=n;i++)
		printf("\n P%d\t\t %d\t\t %d\t\t %d\t\t %d",p[i],b[i],pr[i],w[i],tat[i]);
	printf("\n------------------------------------------------------------------");
	printf("\n Total WaitingTime:%d",t1);
	printf("\n Total TAT:%d",t);
	printf("\n Avg of WaitingTime:%f",(float)t1/n);
	printf("\n Avg of TAT:%f \n",(float)t/n);
}
/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe1d.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 ::PRIORITY SCHEDULING ALGORITHM:: 
 No Of Processes:	4

 Enter Burst times: 
6
5
3
5

 Enter Priorities: 
4
2
6
3

 Process	 BurstTime	 Priority	 WaitingTime	 TAT
 P2		 5		 2		 0		 5
 P4		 5		 3		 5		 10
 P1		 6		 4		 10		 16
 P3		 3		 6		 16		 19
------------------------------------------------------------------
 Total WaitingTime:31
 Total TAT:50
 Avg of WaitingTime:7.750000
 Avg of TAT:12.500000 
*/
