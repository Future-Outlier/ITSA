#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int check = 100*100 + 100*100;
int main()
{
    long long int x, y;
    scanf("%lld%lld", &x, &y);
    if(x*x + y*y > check) printf("outside");
    else printf("inside");

}

