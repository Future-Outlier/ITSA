#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int h, g; // height and gender
int main()
{
    scanf("%d%d", &h, &g);
    double weight=h;
    if(g==1) weight = (weight-80)*0.7;
    else weight = (weight-70)*0.6;
    printf("%.1f", weight);
}


