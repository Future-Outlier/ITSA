#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int alp[128]={0};
char line[100000];
int cnt=0;
int main()
{

    fgets(line, 100000-2, stdin);
    for(int i = 0; i < strlen(line)-1; i++){
        if(line[i] == ' '){
            cnt++;
            continue;
        }
        alp[line[i]]++;
        //printf("hello");
    }
    printf("%d\n", cnt+1);

    for(int i = 60; i < 128; i++)
        if(alp[i]) printf("%c : %d\n", i, alp[i]);


}







