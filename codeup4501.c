#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>


int main()
{
	int arr[7] = { 0 };
	int temp;
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < 7; i++)
	{
		for (int j = i + 1; j < 7; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("%d\n%d", arr[0], arr[1]);
	



	return 0;
}
