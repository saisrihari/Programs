#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double mc=0,ti,t,total,tip=0,tax=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /* read meal cost */
    scanf("%lf",&mc);
    /* read tip percentage */
    scanf("%lf",&tip);
    /* read tax percentage */
    scanf("%lf",&tax);
    ti=mc*(tip/100);
    t=mc*(tax/100);
    total=round(mc+ti+t);
    printf("The total meal cost is %d dollars.",(int)total);
    
    
    return 0;
}

