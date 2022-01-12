#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int num, n1[2], n2[2];
char op[20];
char tmp[20];
int main()
{
    scanf("%s", tmp);
    num = atoi(tmp);
    //printf("num: %lld\n", num);
    while(num--)
    {
        scanf("%s", op);
        scanf("%s", tmp);
        n1[0] = atoi(tmp);
        scanf("%s", tmp);
        n1[1] = atoi(tmp);
        scanf("%s", tmp);
        n2[0] = atoi(tmp);
        scanf("%s", tmp);
        n2[1] = atoi(tmp);
        //printf("%c good\n", op);
        if (op[0] == '-') printf("%lld %lld", n1[0]-n2[0], n1[1]-n2[1]);
        else if (op[0] == '+') printf("%lld %lld", n1[0]+n2[0], n1[1]+n2[1]);
        else printf("%lld %lld", n1[0]*n2[0] - n1[1]*n2[1], n1[0]*n2[1]+n1[1]*n2[0]);

        printf("\n");
    }

}


