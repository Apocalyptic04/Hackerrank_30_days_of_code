#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float meal,tip,tax,tip1,tax1;
    int cost=0;
    float cost1=0;
    scanf("%f",&meal);
    scanf("%f",&tip);
    scanf("%f",&tax);
    tip1=(tip/100)*meal;
    tax1=(tax/100)*meal;
    cost1=meal+tip1+tax1;
    cost=meal+tip1+tax1;
    if(cost1>cost+0.5)
    {
        printf("%d",cost+1);
    }
    else
    {
        printf("%d",cost);
    }
}
