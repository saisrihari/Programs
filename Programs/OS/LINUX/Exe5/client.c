/* C PROGRAM TO IMPLEMENT TWO PROCESS COMMUNICATION USING SHARED MEMORY	*/
/* CLIENT PROGRAM */
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#define size 27
void err(char *s)
{
	perror(s);
	exit(1);
}
int main()
{
	int shmid;
	key_t key;
	char *shm,*s;
	key=1234;
	printf("\n ::CLIENT PROGRAM:: \n");
	if((shmid=shmget(key,size,0666))<0)
		err("shmget error");
	if((shm=shmat(shmid,NULL,0))==(char*)-1)
		err("shmat error");
	for(s=shm;*s!='\0';s++)
		putchar(*s);
	putchar('\n');
	*shm='*';
	exit(0);
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX/Exe5$ cc client.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX/Exe5$ ./a.out

 ::CLIENT PROGRAM:: 
abcdefghijklmnopqrstuvwxyz
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX/Exe5$ 
*/
