#include<stdio.h>
#include<stdlib.h>
#include<string.h>
double max=-1e16, min=1e16, tmp;

int main ()
{
    int t = 10;
    while(t--)
    {
        scanf("%lf", &tmp);
        if(tmp > max) max = tmp;
        if(tmp < min) min = tmp;
    }
    //printf("t %d\n", t);
    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);
}

