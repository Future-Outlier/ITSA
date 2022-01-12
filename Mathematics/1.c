#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
    double a,b,c;
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("Trapezoid area:%.1f", (a+b)*c/2);

}


