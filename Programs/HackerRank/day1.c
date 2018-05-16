#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i=12;
    double d=4.0;
    char s[]="hackerrank ";
    int x,j,k,a;
    double y;
    char str[100];
    scanf("%d",&x);
    scanf("%lf",&y);
    fgets(str,100,stdin);
    scanf ("%[^\n]%*c", str);
    printf("%d\n",i+x);
    printf("%0.1lf\n",d+y);
    for(j=1; s[j]!='\0';j++); 
    for(k=j,a=0; str[a]!='\0'; k++,a++)
    {
      s[k]=str[a];
    }
    s[k]='\0';
    printf("%s",s);	   
}

