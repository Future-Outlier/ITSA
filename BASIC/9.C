#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int num, sum;
int main()
{
    scanf("%lld", &num);
    for(long long int i = 3; i <= num; i++){
        if(i%3==0) sum += i;
    }

    printf("%lld", sum);

}



