#include <stdio.h>

int main()
{
	int i,j,result_a = 0, result_b=0;
	int arr[10];
	int arr2[10];
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i] > arr2[i])
		{
			result_a++;
		}
		else if(arr[i] < arr2[i])
			result_b++;
	}

