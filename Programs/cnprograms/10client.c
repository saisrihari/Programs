//client program
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netinet/in.h>
#define MAXLINE 20
#define SERV_PORT 8114
main(int argc,char **argv)
{
int maxfdp1;
fd_set rset;
char sendline[MAXLINE],recvline[MAXLINE];
int sockfd;
struct sockaddr_in servaddr;
if(argc!=3
)
{
printf("usage tcpcli <ipaddress>");
return;
}
sockfd=socket(AF_INET,SOCK_STREAM,0);
bzero(&servaddr,sizeof(servaddr));
servaddr.sin_family=AF_INET;
servaddr.sin_port=htons(SERV_PORT);
inet_pton(AF_INET,argv[1],&servaddr.sin_addr);
connect(sockfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
printf("\nenter data to be send:");
while(fgets(sendline,MAXLINE,stdin)!=NULL)
{
write(sockfd,sendline,MAXLINE);
printf("\nline send to server :%s ",sendline);
read(sockfd,recvline,MAXLINE);
printf("line received from the server : %s",recvline);
}
exit(0);
}
