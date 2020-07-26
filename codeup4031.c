#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int arr[8] = { 0 };
	int oven_max = arr[0], odd_max = arr[0];
	for (int i = 0; i<7; i++)
	{
		scanf("%d", &arr[i]);
		
	}

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] % 2 == 0)
		{
			if (arr[i] > odd_max)
				odd_max = arr[i];
		}

		else
		{
			if (arr[i] > oven_max)
				oven_max = arr[i];

		}

	}
	printf("%d\n", odd_max + oven_max);


}
