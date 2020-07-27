#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
    int decimal;
    int binary[20] = { 0, };
    scanf("%d", &decimal);
    int value = decimal;
    int position = 0;
    while (1)
    {
        binary[position] = decimal % 2;    // 2로 나누었을 때 나머지를 배열에 저장
        decimal = decimal / 2;             // 2로 나눈 몫을 저장

        position++;    // 자릿수 변경

        if (decimal == 0)    // 몫이 0이 되면 반복을 끝냄
            break;
    }
    printf("2 ");
    // 배열의 요소를 역순으로 출력
    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");
    printf("8 %o\n", value);
    printf("16 %X\n", value);
    return 0;
}
