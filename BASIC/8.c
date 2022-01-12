#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int num;
int main()
{
    scanf("%lld", &num);
    for(long long int i = 2; i * i <= num; i++)
        if(num % i == 0){
            printf("NO");
            return 0;
        }
    printf("YES");

}



