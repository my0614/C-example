#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int guess, input,value;
    srand((long)time(NULL)); // 값을 인자로 호출한다.
    guess = rand() % 100 + 1; //랜덤값 범위 설정

    while (1)
    {

        scanf("%d", &value);
        if (guess == value)
        {
            printf("성공입니다.\n");
            break;
        }
        else
        {
            if (guess > value)
                printf("숫자가 조금 더 높습니다.\n");
            else if (guess < value)
                printf("숫자가 조금 더 낮습니다.\n");
        }
    }
    return 0;
}
