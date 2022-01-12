#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int dice[4];
int rec[7] = {0};
int condition = 0; // 1 for win 2 for r
int cnt = 0; // for r
int vis[7]={0};
int main()
{
    for(int i = 0; i < 4; i++){
        scanf("%d", &dice[i]);
        rec[dice[i]]++;
        if(!vis[dice[i]]){
            vis[dice[i]] = 1;
            cnt++;
        }
    }
    if(cnt == 4) condition = 2;
    for(int i = 1; i <= 6; i++){
        if(rec[i] == 3) condition = 2;
        else if(rec[i] == 4) condition = 1;
    }
    if(condition == 1) printf("WIN");
    else if(condition == 2) printf("R");
    else{
        int avoid_num;
        int sum=0;
        for(int i = 1; i <= 6; i++)
            if(rec[i] == 2){
                avoid_num = i;break;
            }
        for(int i = 1; i <= 6; i++){
            if(i == avoid_num) continue;
            sum += rec[i] * i;
        }
        printf("%d", sum);
    }
    printf("\n");
}
