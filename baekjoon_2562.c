#include <stdio.h>
int main()
{
	
	int arr[10] = { 0, };
	int index = 0;
	int i;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];

	for (i = 0; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i;
		}
		
		
	}
	printf("%d\n%d", max,index+1);
}
