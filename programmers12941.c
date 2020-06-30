#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int num;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);
	int* arr2 = (int*)malloc(sizeof(int) * num);
	printf("===============A array================\n");
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("================B array=====================\n");
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int result = 0;
	for (int i = 0; i < num; i++)
	{
		result += arr[i] * arr2[i];
		
	}
	printf("%d", result);

	return 0;
}
