#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(const void* para1, const void* para2)
{
	return strcmp(*(char**)para1 , *(char**)para2);
}

void main()
{

	char* alist[5] = { "hello","world","love","fried","qute"};
	int i = 0;

	qsort(alist, 5,sizeof(char*), compare);
	for (i = 0; i <  5; i++)
	{
		printf("%s\n", alist[i]);
	}
	return 0;


}
