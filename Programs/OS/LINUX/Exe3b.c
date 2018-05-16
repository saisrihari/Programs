/* C PROGRAM TO EMULATE ls -l COMMAND ON A SUB DIRECTORY */	
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<dirent.h>
int main(int argc,char **argv)
{
	DIR *dp;
	struct dirent *dirp;
	if((dp=opendir(argv[1]))==NULL)
		printf("\n can't open %s",argv[1]);
	while((dirp=readdir(dp))!=NULL)
	{
		struct stat fileStat;
		stat(dirp->d_name,&fileStat);
		printf(dirp->d_name);
		printf("\n------------\n");
		printf("\n File Size:%d bytes\n",fileStat.st_size);
		printf("\n No of Links:%d",fileStat.st_nlink);
		printf("\n File node:%d\n",fileStat.st_ino);
		printf("File Permissions:");
		printf((S_ISDIR(fileStat.st_mode))?"d":"-");
		printf((fileStat.st_mode & S_IRUSR)?"r":"-");
		printf((fileStat.st_mode & S_IWUSR)?"w":"-");
		printf((fileStat.st_mode & S_IXUSR)?"x":"-");
		printf((fileStat.st_mode & S_IRGRP)?"r":"-");
		printf((fileStat.st_mode & S_IWGRP)?"w":"-");
		printf((fileStat.st_mode & S_IXGRP)?"x":"-");
		printf((fileStat.st_mode & S_IROTH)?"r":"-");
		printf((fileStat.st_mode & S_IWOTH)?"w":"-");
		printf((fileStat.st_mode & S_IXOTH)?"x":"-");
		printf("\nThe file %s has symbolic link \n",(S_ISLNK(fileStat.st_mode))?"is":"is not");
	}
	return 0;
}

/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ cc Exe3b.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ ./a.out Exe5
client.c
------------
File Size:0 bytes
No of Links:0
File node:0
File Permissions:----------
The file is not has symbolic link 
a.out
------------
File Size:8928 bytes
No of Links:1
File node:53479136
File Permissions:-rwxrwxr-x
The file is not has symbolic link 
server.c
------------
File Size:8928 bytes
No of Links:1
File node:53479136
File Permissions:-rwxrwxr-x
The file is not has symbolic link 
.
------------
File Size:4096 bytes
No of Links:3
File node:53481310
File Permissions:drwxrwxr-x
The file is not has symbolic link 
..
------------
File Size:4096 bytes
No of Links:4
File node:53478358
File Permissions:drwxrwxr-x
The file is not has symbolic link 
*/
