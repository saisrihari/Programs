/* C PROGRAM TO IMPLEMENT WAIT() & FORK() */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main(){
	int i,pid;
	pid=fork();
	if(pid==-1){
		printf("\n Fork Failed\n");
		exit(0);	
	}
	else if(pid==0){
		printf("\n Child Process Started\n");
		for(i=0;i<5;i++)
			printf("\n Child Process %d is called\n",i);
		printf("\n Child Process Ends\n");		 
	}
	else{
		wait(0);
		printf("\n Parent Process Ends\n");	
	}
	exit(0);
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe2b.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 Child Process Started

 Child Process 0 is called

 Child Process 1 is called

 Child Process 2 is called

 Child Process 3 is called

 Child Process 4 is called

 Child Process Ends

 Parent Process Ends
*/
