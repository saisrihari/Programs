/* C PROGRAM TO COPY THE CONTENTS OF ONE FILE INTO ANOTHER */
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char **argv)//argc-No of Arguments,argv-Arguments that are giving as Command Line Arguments
{
	int n,size,fd1,fd2;
	//fd1 and fd2 are File Pointers
	char c;
	fd1=open(argv[1],O_RDONLY);
	//open the file giving as argument 1 in read mode
	fd2=open(argv[2],O_WRONLY);
	//open the file giving as argument 2 in write mode
	size=lseek(fd1,-1,SEEK_END);
	//seek the size of the file by counting each and every character untill the end file
	n=lseek(fd1,0,SEEK_SET);
	//set the file pointer 1 to starting of the file 
	while(n++<size)
	{
		read(fd1,&c,1);//read the character at fd1 pointer 
		write(fd2,&c,1);//writing the character at fd2 pointer 
	}
}


/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ cc Exe2.c
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ ./a.out file1 file2
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ cat file1
OPERATING SYSTEM AND LINUX PROGRAMMING LAB
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ cat file2
OPERATING SYSTEM AND LINUX PROGRAMMING LAB
*/
