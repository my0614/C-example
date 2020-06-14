#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS



int main()
{
	
	int a[] = { 32,56,7,8,24 };
	int b[] = { 3,32,35,57,4,82,8};
	int c[100] = {0};
	int a_len =  sizeof(a) / sizeof(int);
	int b_len = sizeof(b) / sizeof(int);

	for (int i = 0; i < a_len; i++)
	{
		c[i] = a[i] + b[i];
	}

	for (int i = a_len; i <= b_len; i++)
	{
		c[i] = b[i];
	}

	int c_len = sizeof(c) / sizeof(int);
	for (int i = 0; i < b_len; i++)
	{
		printf("c[i] = %d\n", c[i]);
	}
	
	return 0;
}


