#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n;
int t, m, k;
int arr[105];
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main ()
{
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d%d%d", &t, &m, &k);
        for(int i = 0; i < k; i++)
            scanf("%d", &arr[i]);
        qsort(arr, k, sizeof(int), cmpfunc);
        int sum = 0;
        for(int i = 0; i < m; i++)
            sum += arr[i];
        if(sum > t) printf("Impossible");
        else printf("%d", sum);
        printf("\n");
    }

}
