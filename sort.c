#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(const void* para1, const void* para2)
{
	return *(int*)para1 - *(int*)para2;
}

void main()
{

	int alist[5] = { 1,3,5,2,4 };
	int i = 0;

	qsort(alist, 5,sizeof(int), compare);
	for (i = 0; i <  5; i++)
	{
		printf("%d\t", alist[i]);
	}
	return 0;


}
