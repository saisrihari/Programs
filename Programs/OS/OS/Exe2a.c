/* C PROGRAM TO IMPLEMENT FORK SYSTEM CALL */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main(){
	int pid;
	pid=fork();
	if(pid<0){
		printf("\n Fork Failed \n");
		exit(1);	
	}
	else if(pid==0){
		execlp("bin/who","who",NULL);
		exit(0);	
	}
	else{
		printf("process id is %d\n",getpid());
		wait(NULL);
		exit(0);	
	}
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe2a.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out
process id is 2894
*/
