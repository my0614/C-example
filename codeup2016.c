#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int size, value = 0, a=0,result=0;
	scanf("%d", &size);
	if (size % 3 == 0)
	{
		result = size / 3 - 1;
	}
	else
	{
		result = (size / 3);
	}

	char* str = (char*)malloc(sizeof(char) * size);
	scanf("%s", str);
	
	int len = strlen(str);
	value = len - 1;
	for (int i = 0; i < len; i++)
	{
		printf("%c", str[i]);
		if (value % 3 == 0)
		{
			if (result == a)
			{
				return 0;
			}
			printf(",");
			a++;
		}
		value--;

	}

}
