/* C PROGRAM TO ILLUSTRATE TWO COMMANDS EXECUTION CONCURRENTLY WITH A COMMAND PIPE */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char **argv)
{
	int fd[2],pid,k;
	k=pipe(fd);
	if(k==-1)
	{
		perror("pipe");
		exit(1);
	}
	pid=fork();
	if(pid==0)
	{
		close(fd[0]);
		dup2(fd[1],1);
		close(fd[1]);
		execlp(argv[1],argv[1],NULL);
	}
	else
	{
		wait(2);		
		close(fd[1]);
		dup2(fd[0],0);
		close(fd[0]);
		execlp(argv[2],argv[2],NULL);
	}
}

/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ cc Exe4.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ ./a.out ls sort
a.out
Exe2.c
Exe3a.c
Exe3b.c
Exe4.c
Exe5
Exe6.c
Exe7.c
Exe8.c
file1
file2
*/
