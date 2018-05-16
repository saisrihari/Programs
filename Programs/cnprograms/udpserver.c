#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#define BUFSIZE 512
#define MYPORT 11710
#define MAXNAME 100

int main(int C, char **V )
{
int sd,n,ret;
int l,i,a;
struct sockaddr_in serveraddress,cliaddr;
socklen_t length;
char clientname[MAXNAME],datareceived[BUFSIZE],temp[BUFSIZE];
sd = socket( AF_INET, SOCK_DGRAM, 0 );
if( sd < 0 ) 
{
perror( "socket error" );
exit( 1 );
}
memset( &serveraddress, 0, sizeof(serveraddress) );
memset( &cliaddr, 0, sizeof(cliaddr) );
serveraddress.sin_family = AF_INET;
serveraddress.sin_port = htons(MYPORT);//PORT NO
serveraddress.sin_addr.s_addr = htonl(INADDR_ANY);//IP ADDRESS
ret=bind(sd,(struct sockaddr*)&serveraddress,sizeof(serveraddress));
if(ret<0)
{
perror("\n BIND FAILS");
exit(1);
}
for(;;)
{
printf("\nI am waiting\n");			/*Received a datagram*/
length=sizeof(cliaddr);
n=recvfrom(sd,datareceived,BUFSIZE,0,(struct sockaddr*)&cliaddr , &length);
printf("\nData Received from %s\n",inet_ntop(AF_INET,&cliaddr.sin_addr,clientname,sizeof(clientname)));/*Sending the Received datagram back*/datareceived[n]='\0';
printf("\nI have received %s\n",datareceived);
l=strlen(datareceived);
a=0;
for(i=l-1;i>=0;i--)
temp[a++]=datareceived[i];
temp[a]='\0';
printf("\n data at the server is %s",temp);
sendto(sd,temp,n,0,(struct sockaddr*)&cliaddr,length);
}
}

