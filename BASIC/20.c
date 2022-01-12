#include<stdio.h>
#include<stdlib.h>
#include<string.h>
__int128 sum=0, tmp, a, b;
__int128 n;
__int128 read() {
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}
void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}
int main()
{
    n = read();
    while(n--)
    {
        //tmp = read();
        a = read(), b = read();
        print(a+b);
        printf("\n");
        //sum += tmp;
    }
    //itoa(sum, num, 1000);
    //printf("%s", num);

    //print(sum);

}








