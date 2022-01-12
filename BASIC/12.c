#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int n;
long long int f( long long int n){
    if(n == 0 || n == 1) return n+1;
    return f(n-1) + f(n/2);
}

int main()
{
    scanf("%lld", &n);
    printf("%lld", f(n));

}






