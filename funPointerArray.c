#include <stdio.h>

int add(int, int);
int minus(int, int);

int main()
{
	int (*pAdd[2]) (int, int);

	pAdd[0] = add; 
	pAdd[1] = minus; 
	printf("%d\n", pAdd[0](5, 9));
	printf("%d\n", pAdd[1](8, 1));
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int minus (int a, int b)
{
	return a - b;
}
