#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int plus, minus;
	int a, b;
		scanf("%d %d", &plus, &minus);
		a = (plus + minus) / 2;
		b = plus - a;
		printf("%d\n%d", a, b);
	return 0;
}
