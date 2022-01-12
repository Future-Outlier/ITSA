#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char a[100000], b[100000];
int cnt=0;
int main()
{

    scanf("%s %s", a, b);
    for(int i = 0; i < strlen(b); i++){
        for(int j = 0; j < strlen(a)+1 && i+j <= strlen(b); j++){
            if(j == strlen(a)){
                cnt++;
                break;
            }
            if(b[i+j] != a[j]) break;

        }
    }
    printf("%d", cnt);


}







