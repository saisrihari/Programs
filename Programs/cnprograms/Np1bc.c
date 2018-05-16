// client program
#include<stdio.h>
#include<ctype.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main()
{
	int rdfd,wdfd,n;
	char buf[50],line[50];
	wdfd=open("np1",O_WRONLY);
	rdfd=open("np2",O_RDONLY);
	printf("\n Enter line of text:");
	gets(line);
	write(wdfd,line,strlen(line));
	n=read(rdfd,buf,50);
	buf[n]='\0';
	printf("\n full duplex client:read from pipe=%s\n",buf);
}

