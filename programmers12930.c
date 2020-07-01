#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	int arr2[100];
	gets(arr);
	int arr_len = strlen(arr);
	int i;
	for (i = 0; i < arr_len; i++)
	{
		arr2[i] = arr[i];
	}
	for (i = 0; i < arr_len; i++)
	{
		if (i % 2 == 0) // 짝수이면
		{
			if (arr2[i] >= 97 && arr2[i] <= 122)
			{
				arr2[i] -= 32;
			}
		}
		else if (i % 2 == 1) // 홀수이면
		{
			if (arr2[i] >= 65 && arr2[i] <= 90)
			{
				arr2[i] += 32;
			}
		}
		
	}
	for(i= 0;i<arr_len;i++)
	{
		printf("%c", arr2[i]);
	}
	return 0;
}
