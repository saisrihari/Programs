/* C PROGRAM TO SIMULATE PRODUCER CONSUMER PROBLEM USING SEMAPHORES */
#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=3;
int main()
{
	int n;
	void producer();
	void consumer();
	int wait(int);
	int signal(int);
	while(1){
		printf("\n----MENU----");
		printf("\n 1.PRODUCER \n 2.CONSUMER \n 3.EXIT \n");
		printf("\n Enter Your Option:\t");
		scanf("%d",&n);
		switch(n){
			case 1:if((mutex==1)&&(empty!=0))
					producer();
				else
					printf("\n Buffer Is Full.");
				break;
			case 2:if((mutex==1)&&(full!=0))
					consumer();
				else
					printf("\n Buffer Is Empty.");
				break;
			case 3: exit(0);			
		}
	}
}
int wait(int s){
	return(--s);
}
int signal(int s){
	return(++s);
}
void producer()
{
	mutex=wait(mutex);
	full=signal(full);
	empty=wait(empty);
	printf("\n Producer Produced The Item=%d",full);
	mutex=signal(mutex);
}
void consumer()
{
	mutex=wait(mutex);
	full=wait(full);
	empty=signal(empty);
	printf("\n Consumer Counsumed The Item=%d",empty);
	mutex=signal(mutex);
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ cc Exe6.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ ./a.out

----MENU----
 1.PRODUCER 
 2.CONSUMER 
 3.EXIT 

 Enter Your Option:	1

 Producer Produced The Item=1
----MENU----
 1.PRODUCER 
 2.CONSUMER 
 3.EXIT 

 Enter Your Option:	1

 Producer Produced The Item=2
----MENU----
 1.PRODUCER 
 2.CONSUMER 
 3.EXIT 

 Enter Your Option:	1

 Producer Produced The Item=3
----MENU----
 1.PRODUCER 
 2.CONSUMER 
 3.EXIT 

 Enter Your Option:	1

 Buffer Is Full.
----MENU----
 1.PRODUCER 
 2.CONSUMER 
 3.EXIT 

 Enter Your Option:	2

 Consumer Counsumed The Item=1
----MENU----
 1.PRODUCER 
 2.CONSUMER 
 3.EXIT 

 Enter Your Option:	2

 Consumer Counsumed The Item=2
----MENU----
 1.PRODUCER 
 2.CONSUMER 
 3.EXIT 

 Enter Your Option:	2

 Consumer Counsumed The Item=3
----MENU----
 1.PRODUCER 
 2.CONSUMER 
 3.EXIT 

 Enter Your Option:	2

 Buffer Is Empty.
----MENU----
 1.PRODUCER 
 2.CONSUMER 
 3.EXIT 

 Enter Your Option:	3
*/
