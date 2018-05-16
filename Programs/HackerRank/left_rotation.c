#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k,j,i=0,temp=0; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    while(i<k)
    {
        j=0;
        temp=a[j];
        while(j<n-1)
        {
            a[j]=a[j+1];
            j++;
        }
	a[j]=temp;
        i++;
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}

