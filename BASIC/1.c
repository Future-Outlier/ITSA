#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *num[10][5];
char input[5];
int main()
{
    scanf("%s", input);
    num[0][0] = "*****";
    num[0][1] = "*   *";
    num[0][2] = "*   *";
    num[0][3] = "*   *";
    num[0][4] = "*****";

    num[1][0] = "    *";
    num[1][1] = "    *";
    num[1][2] = "    *";
    num[1][3] = "    *";
    num[1][4] = "    *";

    num[2][0] = "*****";
    num[2][1] = "    *";
    num[2][2] = "*****";
    num[2][3] = "*    ";
    num[2][4] = "*****";

    num[3][0] = "*****";
    num[3][1] = "    *";
    num[3][2] = "*****";
    num[3][3] = "    *";
    num[3][4] = "*****";

    num[4][0] = "*   *";
    num[4][1] = "*   *";
    num[4][2] = "*****";
    num[4][3] = "    *";
    num[4][4] = "    *";

    num[5][0] = "*****";
    num[5][1] = "*    ";
    num[5][2] = "*****";
    num[5][3] = "    *";
    num[5][4] = "*****";

    num[6][0] = "*****";
    num[6][1] = "*    ";
    num[6][2] = "*****";
    num[6][3] = "*   *";
    num[6][4] = "*****";

    num[7][0] = "*****";
    num[7][1] = "    *";
    num[7][2] = "    *";
    num[7][3] = "    *";
    num[7][4] = "    *";

    num[8][0] = "*****";
    num[8][1] = "*   *";
    num[8][2] = "*****";
    num[8][3] = "*   *";
    num[8][4] = "*****";

    num[9][0] = "*****";
    num[9][1] = "*   *";
    num[9][2] = "*****";
    num[9][3] = "    *";
    num[9][4] = "    *";

     for(int i = 0; i < 5 ; i++){
        for(int j = 0; j < 4; j++){
            printf("%s ", num[input[j]-'0'][i]);
            //cout<<<<" ";
        }
        printf("\n");
        //cout<<endl;
    }

}
