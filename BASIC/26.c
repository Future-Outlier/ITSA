#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char nums[10005][11];

struct number{
    int sum;
    int id;
}numbers[10005];
int n, sum;

int cmpfunc (const void * a, const void * b) {
   struct number *A = (struct number*)a, *B = (struct number*)b;
   return A->sum - B->sum;
}
int main ()
{
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", nums[i]);
        numbers[i].id = i, numbers[i].sum = 0;
        for(int j = 0; j < strlen(nums[i]); j++)
            numbers[i].sum += nums[i][j] - '0';
    }

    qsort(numbers, n, sizeof(struct number), cmpfunc);

    for(int i = 0; i < n; i++)
        printf("%s ", nums[numbers[i].id]);

    return 0;
}

