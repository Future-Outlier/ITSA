#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int r, c;
long long int m[105][105];


int main()
{
    scanf("%lld %lld", &r, &c);
    for(int i = 1; i <= r; i++)
        for(int j = 1; j <= c; j++)
            scanf("%lld", &m[i][j]);

    for(int j = 1; j <= c; j++){
        for(int i = 1; i <= r; i++)
            printf("%lld ", m[i][j]);
        printf("\n");
    }

}





