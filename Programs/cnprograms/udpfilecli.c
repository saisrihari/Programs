//CLIENT PROGRAM
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#define MAX 512
#define SERV_PORT 6349
main(int argc,char **argv)
{
char filename[80];
int sockfd;
struct sockaddr_in servaddr;
char recvline[80];
socklen_t len;
sockfd=socket(AF_INET,SOCK_DGRAM,0);
bzero(&servaddr,sizeof(servaddr));
servaddr.sin_family=AF_INET;
servaddr.sin_port=htons(SERV_PORT);
inet_pton(AF_INET,argv[1],&servaddr.sin_addr);
len=sizeof(servaddr);
printf("enter the file name");
scanf("%s",filename);
sendto(sockfd,filename,strlen(filename),0,(struct sockaddr*)&servaddr,len);
recvfrom(sockfd,recvline,MAX,0,(struct sockaddr*)&servaddr,&len);
printf("%s",recvline);
}
