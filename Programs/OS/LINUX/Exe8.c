/* C PROGRAM TO ILLUSTRATE CONCURRENT EXECUTION OF PTHREAD */
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define M 2
#define N 2
int matrix[N][M];
void *sum(void *i)
{
	int n=(int)i;
	int total=0;
	int j;
	for(j=0;j<M;j++)
		total+=matrix[n][j];
	printf("\n Total in Row%d=%d",n,total);
	pthread_exit((void *)total);
}
int main()
{
	int i,j;
	pthread_t threads[N];
	int total=0;
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			matrix[i][j]=i+j+M;
	printf("\n Elements in the matrix are \n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("\t %d",matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<N;i++)
	{
		if(pthread_create(&threads[i],NULL,sum,(void *)i)){
			printf("\n can't create thread");
			exit(1);		
		}
	}
	for(i=0;i<N;i++)
	{
		int value=0;
		pthread_join(threads[i],(void **)&value);
		total+=value;
	}
	printf("\n Total values in the matrix is %d\n",total);
	return 0;
}



/*
OUTPUT:-
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ cc Exe8.c -lpthread
srihari@srihari-Vostro-14-3468:~/SriHari/Programs/OSprograms/LINUX$ ./a.out

 Elements in the matrix are 
	 2	 3
	 3	 4

 Total in Row0=5
 Total in Row1=7
 Total values in the matrix is 12
*/
