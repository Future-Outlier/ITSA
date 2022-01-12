#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char line[10005];
int n, sum;
int main ()
{
    scanf("%d\n", &n);
    while(n--)
    {
        fgets(line, 50, stdin);
        sum = 0;
        for(int i = 0; i < strlen(line)-1; i++)
            sum += line[i];
        printf("%d\n", sum);
    }
    return 0;
}
