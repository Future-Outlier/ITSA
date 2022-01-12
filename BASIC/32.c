#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>


char line[150];

int main ()
{
    fgets(line, 150, stdin);
    int x;
    //printf("%d", line[0]);
    //printf("%s\n", line);
    scanf("%d", &x);
    for(int i = 0; i < strlen(line)-1; i++)
        if(isalpha(line[i])){
            int start;
            int mod;
            if(line[i] >= 'A' && line[i] <= 'Z') start = 'A'-1, mod = line[i]-'A';
            else start = 'a'-1, mod = line[i]-'a';
            mod = (mod+x) % 26;
            while(mod < 0)
                mod += 26;
            mod++;
            line[i] = (char)(start+mod);

        }
    line[strlen(line)-1] = '\0';
    printf("%s", line);
    printf("\n");

}
