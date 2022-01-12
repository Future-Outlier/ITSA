#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int x, y;
int month[13];
int main ()
{
    month[1] = 31;
    month[2] = 28;
    month[3] = 31;
    month[4] = 30;
    month[5] = 31;
    month[6] = 30;
    month[7] = 31;
    month[8] = 31;
    month[9] = 30;
    month[10] = 31;
    month[11] = 30;
    month[12] = 31;
    scanf("%d%d", &x, &y);
    int sum = 0;
    for(int i = 1; i <= x-1; i++)
        sum += month[i];
    sum += y;
    if(sum>=21&&sum<=49) printf("Aquarius");
    else if(sum>=50&&sum<=79) printf("Pisces");
    else if(sum>=80&&sum<=110) printf("Aries");
    else if(sum>=111&&sum<=141) printf("Taurus");
    else if(sum>=142&&sum<=173) printf("Gemini");
    else if(sum>=174&&sum<=204) printf("Cancer");
    else if(sum>=205&&sum<=236) printf("Leo");
    else if(sum>=237&&sum<=267) printf("Virgo");
    else if(sum>=268&&sum<=297) printf("Libra");
    else if(sum>=298&&sum<=326) printf("Scorpio");
    else if(sum>=327&&sum<=355) printf("Sagittarius");
    else printf("Capricorn");

    printf("\n");


}

