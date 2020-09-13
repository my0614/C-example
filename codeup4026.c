#include <stdio.h>

int main()
{
	int arr[4] = {0};
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int tmp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			
			}
		}
	}
	printf("%d",arr[2]);
	
}
