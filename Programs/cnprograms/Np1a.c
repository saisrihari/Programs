/* Creation of a One-Way pipe between two processes */
#include<stdio.h>
#include<stdlib.h>
main()
{
	int pipefd[2],n,pid;
	char buff[100];
	pipe(pipefd);
	printf("\n readfd=%d",pipefd[0]);
	printf("\n writefd=%d",pipefd[1]);
	pid=fork();
	if(pid==0)
	{
		close(pipefd[0]);
		printf("\n child process sending data....\n");
		write(pipefd[1],"welcome",10);
	}
	else
	{
		close(pipefd[1]);
		printf("\n parent process receives data....\n");
		n=read(pipefd[0],buff,sizeof(buff));
		printf("\n size of the data=%d",n);
		printf("data received from child through pipe is....%s\n",buff);
	}
}
