/* C PROGRAM TO EMULATE UNIX ls -l COMMAND */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	int pid;
	pid=fork();//fork() creates a child process(creation is success returns '0' else '-1'
	if(pid<0)
	{
		printf("\n child process creation failed");
		exit(-1);
	}
	else if(pid==0)
		execlp("/bin/ls","ls","-l",NULL);//int execlp(const char *path, const char *arg0, ..., NULL);
 
	else
	{
		wait(NULL);
		printf("\n child process completed");
		exit(0);
	}
}

/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ cc Exe3a.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ ./a.out
total 52
-rwxrwxr-x 1 srihari srihari 8808 Nov  9 12:08 a.out
-rw-rw-r-- 1 srihari srihari 1190 Nov  9 12:08 Exe2.c
-rw-rw-r-- 1 srihari srihari  525 Oct 18 23:06 Exe3a.c
-rw-rw-r-- 1 srihari srihari 1218 Oct 18 23:31 Exe3b.c
-rw-rw-r-- 1 srihari srihari  472 Nov  7 19:20 Exe4.c
drwxrwxr-x 2 srihari srihari 4096 Nov  7 19:57 Exe5
-rw-rw-r-- 1 srihari srihari 1012 Nov  7 20:16 Exe6.c
-rw-rw-r-- 1 srihari srihari  516 Nov  7 21:05 Exe7.c
-rw-rw-r-- 1 srihari srihari  899 Nov  7 22:31 Exe8.c
-rw-rw-r-- 1 srihari srihari   43 Nov  9 12:05 file1
-rw-rw-r-- 1 srihari srihari   44 Nov  9 12:06 file2
*/	
