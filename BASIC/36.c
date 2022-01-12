#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int year;
int main ()
{
    scanf("%d", &year);
    if(year%4 == 0){
        if(year%100 == 0 && year % 400 != 0) printf("Common Year");
        else printf("Bissextile Year");
    }else{
        printf("Common Year");
    }
    printf("\n");
}
