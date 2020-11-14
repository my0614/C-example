#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n,i;
	scanf("%d", &n);
	int *arr = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0], min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("%d %d", min, max);
}
