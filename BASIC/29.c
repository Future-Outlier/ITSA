#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char alp[27];
int main ()
{
    alp[0] = 10;
    alp[1] = 11;
    alp[2] = 12;
    alp[3] = 13;
    alp[4] = 14;
    alp[5] = 15;
    alp[6] = 16;
    alp[7] = 17;

    alp[8] = 34;

    alp[9] = 18;
    alp[10] = 19;
    alp[11] = 20;
    alp[12] = 21;
    alp[13] = 22;

    alp[14] = 35;

    alp[15] = 23;
    alp[16] = 24;
    alp[17] = 25;
    alp[18] = 26;
    alp[19] = 27;
    alp[20] = 28;
    alp[21] = 29;

    alp[22] = 32;

    alp[23] = 30;
    alp[24] = 31;

    alp[25] = 33;
    // 'A' - 65
    char s[11];
    scanf("%s", s);
    int sum = 0;
    sum = alp[s[0]-'A']/10 + (alp[s[0]-'A']%10 )* 9 + (s[1]-'0') * 8 +
            (s[2]-'0') * 7 + (s[3]-'0') * 6 + (s[4]-'0') * 5
            + (s[5]-'0') * 4 + (s[6]-'0') * 3
            + (s[7]-'0') * 2 + (s[8]-'0')+ (s[9]-'0');
    //printf("sum: %d\n", sum);
    if(sum % 10 == 0) printf("CORRECT!!!");
    else printf("WRONG!!!");

    printf("\n");




}
