/* C PROGRAM TO SIMULATE MVT(MULTIPROGRAMMING WITH VARIABLE NUMBER OF TASKS) */
#include<stdio.h>
void main(){
	int ms,mp[10],i,temp,n=0,ch=1;
	printf("\n ::MULTIPROGRAMMING WITH VARIABLE NUMBER OF TASKS::");
	printf("\n Enter Total Memory in Bytes:\t");
	scanf("%d",&ms);
	temp=ms;
	for(i=0;ch==1;i++,n++){
		printf("\n Enter Memory Required for Process%d:\t",i+1);
		scanf("%d",&mp[i]);
		if(mp[i]<=temp){
			printf("\n Memory Allocated for Process%d\n",i+1);
			temp=temp-mp[i];		
		}
		else{
			printf("\n Memory Full\n");
			break;		
		}
		printf("\n Do You Want to Continue[1|0]\n");
		printf("\n Enter 0 to Exit\n");
		scanf("%d",&ch);
	}
	printf("\n Process\t\t MemoryAllocated\n");
	for(i=0;i<n;i++)
		printf("\n P%d\t\t\t%d",i+1,mp[i]);
	printf("\n Total Memory:%d",ms);
	printf("\n Total Memory Allocated:%d",ms-temp);
	printf("\n Total External Fragmentation:%d\n",temp);	
}

/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe3b.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 ::MULTIPROGRAMMING WITH VARIABLE NUMBER OF TASKS::
 Enter Total Memory in Bytes:	110

 Enter Memory Required for Process1:	40

 Memory Allocated for Process1

 Do You Want to Continue[1|0]

 Enter 0 to Exit
1

 Enter Memory Required for Process2:	52

 Memory Allocated for Process2

 Do You Want to Continue[1|0]

 Enter 0 to Exit
1

 Enter Memory Required for Process3:	58

 Memory Full

 Process		 MemoryAllocated

 P1			40
 P2			52
 Total Memory:110
 Total Memory Allocated:92
 Total External Fragmentation:18
*/
