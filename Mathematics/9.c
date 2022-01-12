#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int x;
int main ()
{
    scanf("%d", &x);
    if(x > 31) printf("Value of more than 31");
    else printf("%d", 1<<x);
}
