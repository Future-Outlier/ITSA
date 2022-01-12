#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

double x;
int main ()
{
    scanf("%lf", &x);
    printf("%.1f", round(x*x*10)/10);
}
