// server program
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
	int wdfd,rdfd,n,d,val,count;
	char buf[50];
	val=mkfifo("np1",0666);
	val=mkfifo("np2",0666);
	rdfd=open("np1",O_RDONLY);
	wdfd=open("np2",O_WRONLY);
	n=read(rdfd,buf,50);
	buf[n]='\0';
	printf("\n full duplex server: read from pipe=%s \n",buf);
	count=0;
	while(count<n)
	{
		buf[count]=toupper(buf[count]);
		count++;
	}
	write(wdfd,buf,strlen(buf));
}
