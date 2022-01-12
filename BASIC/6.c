#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int num;

int main()
{
    scanf("%lld", &num);
    if(3 <= num && 5 >= num) printf("Spring");
    else if(6 <= num && 8 >= num) printf("Summer");
    else if(9 <= num && 11 >= num) printf("Autumn");
    else printf("Winter");

}


