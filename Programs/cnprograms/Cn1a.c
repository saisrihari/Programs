/* C program to implement bit stuffing & destuffing */
#include<stdio.h>
#include<stdlib.h>
#define size 100
int main()
{
	char *p,*q;
	char temp;
	char in[size];
	char stuf[size];
	char dstuf[size];
	int count=0;
	printf("\n Enter input string(0's & 1's Only)\n");
	scanf("%s",in);
	p=in;
	q=stuf;
	while(*p!='\0')
	{
		if(*p=='0')
		{
			*q=*p;
			q++;
			p++;
		}
		else
		{
			while(*p=='1' && count!=5)
			{
				count++;
				*q=*p;
				q++;
				p++;
			}
			if(count==5)
			{
				*q='0';
				q++;
			}
			count=0;
		}
	}
	*q='\0';
	printf("\n After stuffing the string is:");
	printf("%s",stuf);
	p=stuf;
	q=dstuf;
	while(*p!='\0')
	{
		if(*p=='0')
		{
			*q=*p;
			q++;
			p++;
		}
		else
		{
			while(*p=='1' && count!=5)
			{
				count++;
				*q=*p;
				q++;
				p++;
			}
			if(count==5)
			{
				p++;
			}
			count=0;
		}
	}
	*q='\0';
	printf("\n Destuffed string is:");
	printf("%s",dstuf);
}
