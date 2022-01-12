#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char special[10];
char prize[3][10];
char l[10]; // lottery
int n;
int m[10]; // money
int money[10] = {0,0,0,200,1000,4000,10000,40000,200000,2000000};
int main ()
{
    scanf("%s", special);
    scanf("%s", prize[0]);
    scanf("%s", prize[1]);
    scanf("%s", prize[2]);
    scanf("%d", &n);
    int z, a, b, c;
    while(n--)
    {
        z=a=b=c=0;
        scanf("%s", l);

        for(int i = 0; i < 8; i++)
            if(l[i] == special[i])
                z++;
            else break;

        if(z == 8){
            m[9]++;
            continue;
        }

        for(int i = 7; i >= 0; i--)
            if(l[i] == prize[0][i])
                a++;
            else
                break;

        for(int i = 7; i >= 0; i--)
            if(l[i] == prize[1][i])
                b++;
            else
                break;

        for(int i = 7; i >= 0; i--)
            if(l[i] == prize[2][i])
                c++;
            else
                break;

        if(a >= b && a >= c && a >= 3) m[a]++;
        else if(b >= a && b >= c && b >= 3) m[b]++;
        else if(c >= a && c >= b && c >= 3) m[c]++;


    }
    int sum = 0;
    for(int i = 9; i >= 3; i--){
        printf("%d ", m[i]);
        sum += m[i] * money[i];
    }

    printf("\n");

    printf("%d", sum);


}



