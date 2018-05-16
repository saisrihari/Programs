/* C PROGRAM TO IMPLEMENT EXEC() SYSTEM CALL */
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main(){
	printf("\n exec System Call Execution\n");
	printf("\n Displaying the Date \n");
	execlp("/bin/date","date",NULL);
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ cc Exe2c.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/OS$ ./a.out

 exec System Call Execution

 Displaying the Date 
Thu Nov  9 11:15:59 IST 2017
*/
