#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int a, b;
long long int gcd(long long int a, long long int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main()
{
    scanf("%lld %lld", &a, &b);
    printf("%lld", gcd(a, b));

}




