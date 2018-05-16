/* C PROGRAM TO CREATE A THREAD USING LIBRARY */
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void * print (void *ptr)
{
	char *msg;
	msg=(char *)ptr;
	printf("\n %s\n",msg);
}
int main()
{
	pthread_t t1,t2;
	char *msg1="Thread1";
	char *msg2="Thread2";
	int r1,r2;
	r1=pthread_create(&t1,NULL,print,(void *)msg1);
	r2=pthread_create(&t2,NULL,print,(void *)msg2);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	printf("\n Thread1 returns:%d \n",r1);
	printf("\n Thread2 returns:%d \n",r2);
	exit(0);
}

/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ cc Exe7.c -lpthread
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ ./a.out

 Thread1

 Thread2

 Thread1 returns:0 

 Thread2 returns:0 
*/
