//SERVER PROGRAM
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#define SERV_PORT 6349
main(int argc,char **argv)
{
char filename[80],recvline[80];
FILE *fp;
struct sockaddr_in servaddr,cliaddr;
int sockfd;
socklen_t len;
sockfd=socket(AF_INET,SOCK_DGRAM,0);
bzero(&servaddr,sizeof(servaddr));
servaddr.sin_family=AF_INET;
servaddr.sin_port=htons(SERV_PORT);
bind(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr));
len=sizeof(cliaddr);
recvfrom(sockfd,filename,80,0,(struct sockaddr*)&cliaddr,&len);
printf("\n data in the file is \n ");
fp=fopen(filename,"r");
while(fgets(recvline,80,fp)!=NULL)
{
printf("\n %s\n ",recvline);
//write(sockfd,recvline,80);
}
sendto(sockfd,recvline,sizeof(recvline),0,(struct sockaddr*)&cliaddr,len);
fclose(fp);
}
