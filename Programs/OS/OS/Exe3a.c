/* C PROGRAM TO SIMULATE MFT(MULTIPROGRAMMING WITH FIXED NUMBER OF TASKS) */
#include<stdio.h>
void main(){
	int ms,ps,nob,ef,n,mp[10],tif=0,i,p=0;
	printf("\n ::MULTIPROGRAMMING WITH FIXED NUMBER OF TASKS::");
	printf("\n Enter Memory Size in Bytes:\t");
	scanf("%d",&ms);
	printf("\n Enter Partition Size in Bytes:\t");
	scanf("%d",&ps);
	nob=ms/ps;
	ef=ms-nob*ps;
	printf("\n Enter Number of Processes:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Enter Memory Required for Process%d:\t",i+1);
		scanf("%d",&mp[i]);	
	}
	printf("\n Number of Blocks in the Memory:%d",nob);
	printf("\n Process\t Memory Required\t Memory Allocated\t Internal Fragmentation\n");
	for(i=0;i<n&&p<nob;i++){
		printf("\n P%d\t\t\t %d",i+1,mp[i]);
		if(mp[i]>ps)
			printf("\t\t\tNO\t\t\t----");
		else{
			printf("\t\t\tYES\t\t\t%d",ps-mp[i]);
			tif=tif+(ps-mp[i]);
			p++;
		}
	}
	if(i<n)
		printf("\n MemoryFull,remaining can't accomadate\n");
	printf("\n Total Internal Fragmentation:%d",tif);
	printf("\n Total External Fragmentation:%d\n",ef);
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe3a.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 ::MULTIPROGRAMMING WITH FIXED NUMBER OF TASKS::
 Enter Memory Size in Bytes:	110

 Enter Partition Size in Bytes:	25

 Enter Number of Processes:	4

 Enter Memory Required for Process1:	19

 Enter Memory Required for Process2:	20

 Enter Memory Required for Process3:	24

 Enter Memory Required for Process4:	17

 Number of Blocks in the Memory:4
 Process	 Memory Required	 Memory Allocated	 Internal Fragmentation

 P1			 19			YES			6
 P2			 20			YES			5
 P3			 24			YES			1
 P4			 17			YES			8
 Total Internal Fragmentation:20
 Total External Fragmentation:10
*/
