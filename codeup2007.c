#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}

	int temp = 1;
	for (int i = 1; i < num; i++)
	{
		// 오름차순 
		if (arr[i] > arr[i - 1])
		{
			temp++;
			
		}
		else if (arr[i] < arr[i - 1])
		{
			temp--;
		}

	}

	if (temp == num)
	{
		printf("오름차순");

	}
	else if (temp <= (num*-1)+2)
	{
		printf("내림차순");

	}
	else
	{
		printf("섞임");

	}

	free(arr);
	return 0;



}
