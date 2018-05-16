/* program to implement shared memory through semaphore*/
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/msg.h>
#include<sys/sem.h>
#include<string.h>
int main()
{
	int shmid,sid=-1;
	int  shmptr;
	pid_t pid;
	shmid=shmget(20,1024,0644|IPC_CREAT);
	shmptr=shmat(shmid,0,0);
	if(shmptr==-1)
	printf("\n error ");
	else
	printf("\n shared memory created\n");
	if(sid<0)
	{
	if((sid=shmget(30,1,IPC_CREAT|0644))<0)
	printf("\n semaphore is not not created");
	else
	printf("\n semaphore is created\n");
	}
	printf("\n enter an integer value:\t");
	scanf("%d",&shmptr);
	printf("\n entered value = %d\n", shmptr);
	if((pid=fork())==0)
	{
	wait(sid);
	shmptr+=1;
	printf("\n child value = %d\n",shmptr);
	signal(sid);
	}
	else if(pid>0)
	{
	shmptr+=1;
	printf("\n parent value = %d\n",shmptr);
	}
}	






















