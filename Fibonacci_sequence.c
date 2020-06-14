#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input;

int pibo(int a)
{
	if (a < 3) return 1;
	
	return pibo(a - 1) + pibo(a - 2);
}

int main()
{

	scanf("%d", &input);
	printf("\n\n%d", pibo(input));
}
