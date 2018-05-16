/* C PROGRAM TO IMPLEMENT TWO PROCESS COMMUNICATION USING SHARED MEMORY	*/
/* SERVER PROGRAM */
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define size 27
void err(char *s)
{
	perror(s);
	exit(1);
}
int main()
{
	char c;
	int shmid;
	key_t key;
	char *shm,*s;
	key=1234;
	printf("\n ::SERVER PROGRAM:: \n");
	if((shmid=shmget(key,size,IPC_CREAT|0666))<0)
		err("shmget error");
	if((shm=shmat(shmid,NULL,0))==(char*)-1)
		err("shmat error");
	s=shm;
	for(c='a';c<='z';c++)
		*s++=c;
	while(*shm!='*')
		sleep(1);
	exit(0);
}

/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX/Exe5$ cc server.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX/Exe5$ ./a.out

 ::SERVER PROGRAM:: 
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX/Exe5$ 
*/
