#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int binary[20];
    int pisition = 0;
    gets(str);
    int str_len = strlen(str);

    for (int i = str_len-1; i >=0; i--)
    {

      int position = 0;
        while (1)
        {
            binary[position] = str[i] % 2;    // 2로 나누었을 때 나머지를 배열에 저장
            str[i] = str[i] / 2;             // 2로 나눈 몫을 저장

            position++;    // 자릿수 변경

            if (str[i] == 0)    // 몫이 0이 되면 반복을 끝냄
                break;
        }

        // 배열의 요소를 역순으로 출력
        for (int i = position-1; i >=0; i--)
        {
            if (binary[i] == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");

    
     
    }

    return 0;
}
