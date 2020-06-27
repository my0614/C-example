#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num,i,j;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);
	int result[10];
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	
	for (i = 0; i < num; i++)
	{
		
			if (arr[i] != arr[i+1])
			{
				result[i] = arr[i];
			}
			else
			{
				result[i]=-1;
			}
			
		
	}
	
	for (i = 0; i < num; i++)
	{
		if(result[i] != -1)
			printf("%d\n", result[i]);
	}
	

	return 0;
}
