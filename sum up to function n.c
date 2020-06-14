#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void getsum();

int main()
{
	int m;
	scanf("%d", &m);
	getsum(&m);
	return 0;
}


void getsum(int* a)
{
	int i,h = 0;

	for (i = 0; i <= *a; i++)
	{
		h += i;
	}
	printf("hap = %d", h);
}

