/* C program to implement character stuffing */
#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,j=0,n,pos,ch,d;
	char a[20],b[40];
	printf("\n Enter the String:");
	scanf("%s",a);
	n=strlen(a);
	printf("\n Enter Position:");
	scanf("%d",&pos);
	if(pos>n)
	{
		printf("\n Invalid position:Enter again:");
		scanf("%d",&pos);
	}
	printf("\n Enter any number:");
	scanf("%d",&ch);
	b[0]='d';
	b[1]='l';
	b[2]='e';
	b[3]='s';
	b[4]='t';
	b[5]='x';
	j=6;
	while(i<n)
	{
		if(i==pos-1)
		{
			b[j]='d';
			b[j+1]='l';
			b[j+2]='e';
			b[j+3]='ch';
			b[j+4]='d';
			b[j+5]='l';
			b[j+6]='e';
			j=j+7;
		}
		if(a[i]=='d' && a[i+1]=='l' && a[i+2]=='e')
		{
			b[j]='d';
			b[j+1]='l';
			b[j+2]='e';
			j=j+3;
		}
		b[j]=a[i];
		i++;
		j++;
	}
	b[j]='d';
	b[j+1]='l';
	b[j+2]='e';
	b[j+3]='e';
	b[j+4]='t';
	b[j+5]='x';
	b[j+6]='\0';
	printf("\n After stuffing the string is %s\n",b);
	d=strlen(b);
	i=0;
	while(i>6 && i<d-6)
	{
		if(i==6+pos-1)
		{
			i=i+6;
		}
		if(b[i]=='d' && b[i+1]=='l' && b[i+2]=='e')
		{
			i=i+6;
		}
		a[i-6]=b[i];
		i++;
	}
	printf("\n After destuffing is %s",a);
	
}
