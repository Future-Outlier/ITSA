#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int a, b, c, d;
long long int gap;
int main()
{
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    d += (c-a)*60;
    gap = d - b;

    long long int sum = 0;
    if(gap == 30) sum = 30;
    else if(gap >= 30 && gap <= 120){
        sum += (gap/30) * 30 + gap%30 ? 30 : 0;
    }else if(gap > 120 && gap <= 240){
        gap -= 120;
        sum += 30 * 4;
        sum += (gap/30) * 40 + gap%30 ? 40 : 0;
    }else{
        gap -= 240;
        sum += 30*4 + 40*4;
        sum += (gap/30) * 60;
    }

    printf("%lld", sum);

}

