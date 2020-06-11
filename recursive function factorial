#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int fac(int a);


int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
        printf("fac %d = %d\n", i, fac(i));
    return 0;
}

int fac(int a)
{
    if (a <= 1)
        return 1;
    else
        return(a * fac(a - 1));
}
