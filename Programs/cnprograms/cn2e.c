#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,keylen,msglen,pos=0,in,count=0;
	char input[100],key[30],temp[30],quot[100],rem[30],key1[30],output[100];
	printf("\n enter frame :\t");
	gets(input);
	printf("\n enter divisor:\t");
	gets(key);
	keylen=strlen(key);
	msglen=strlen(input);
	strcpy(key1,key);
	for(i=0;i<keylen-1;i++)
	{
		input[msglen+i]='0';
	}
        for(i=0;i<msglen;i++)
		temp[i]=input[i];
	for(i=0;i<msglen;i++)
	{
		quot[i]=temp[0];
		if(quot[i]=='0')
			for(j=0;j<keylen;j++)
				key[j]='0';
		else
			for(j=0;j<keylen;j++)
				key[j]=key1[j];
		for(j=keylen-1;j>0;j--)
		{
			if(temp[j]==key[j])
				rem[j-1]='0';
			else
				rem[j-1]='1';
		}
		rem[keylen-1]=input[i+keylen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	printf("\n Quotient is...:\t");
	for(i=0;i<msglen;i++)
		printf("%c",quot[i]);
	printf("\n Remainder is...:\t");
	for(i=0;i<keylen;i++)
		printf("%c",rem[i]);
	printf("\n Final data to be transmitted is:\t");
	for(i=0;i<msglen;i++)
		printf("%c",input[i]);
	for(i=0;i<keylen-1;i++)
		printf("%c",rem[i]);
	printf("\n");
	strcpy(output,input);
	printf("\n Do you want to insert wrong info:press(1/0)");
	scanf("%d",&in);
	if(in==1){
	printf("\n Enter the position:");
	scanf("%d",&pos);
	if(output[pos]=='0')
	output[pos]='1';
	else
	output[pos]='0';
	}
	printf("\n After changing the data:");
	for(i=0;i<msglen;i++)
		printf("%c",output[i]);
	for(i=msglen,j=0;i<msglen+(keylen-1);i++,j++)
		output[i]=rem[j];
	for(i=0;i<msglen;i++)
		temp[i]=output[i];
	for(i=0;i<msglen;i++)
	{
		quot[i]=temp[0];
		if(quot[i]=='0')
			for(j=0;j<keylen;j++)
				key[j]='0';
		else
			for(j=0;j<keylen;j++)
				key[j]=key1[j];
		for(j=keylen-1;j>0;j--)
		{
			if(temp[j]==key[j])
				rem[j-1]='0';
			else
				rem[j-1]='1';
		}
		rem[keylen-1]=output[i+keylen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	printf("\n Remainder after transmission:\t");
	for(i=0;i<keylen-1;i++)
		printf("%c",rem[i]);
	for(i=0;i<keylen-1;i++)
	{
		if(rem[i]=='1')
		{
			count++;
		}
	}
	if(count==0)
		printf("\n Data is accepted");
	else
		printf("\n Data is rejected");
	printf("\n");
}
		
