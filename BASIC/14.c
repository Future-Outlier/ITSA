#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char s[10000];
int main()
{
    scanf("%s", s);
    //printf("s: %s %lld\n", s, strlen(s));
    for(int i = 0; i < strlen(s) / 2; i++)
        if(s[i] != s[strlen(s)-i-1]){
            printf("NO");
            return 0;
        }
    printf("YES");

}






