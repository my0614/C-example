#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
 {
    int i = 0, j = 0;
    int arnData[4][5] = {
        {1,2,3,4,0},
        {5,6,7,8,0},
        {9,10,11,12,0},
        {0,0,0,0,0}
    };

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            arnData[i][4] += arnData[i][j];
    }


    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            arnData[3][i] += arnData[j][i];
    }

    

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%2d ", arnData[i][j]);
        printf("\n");
    }
         
    

}

 
