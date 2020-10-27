#include <stdio.h>
#include <string.h>

int large=0,small=0;

int main()
{
	int arr[] = {47,25,39,16,68,52,79};
	int temp;
	int arr_len = sizeof(arr) / sizeof(int);
	//printf("size = %d\n",arr_len); // 사이즈 출력 
	if(arr_len == 1)
	{
		large = arr[0];
		small = arr[0];
		printf("large = %d small = %d",large,small);
		return 0;
	}
	
	large = arr[1];
	small = arr[0];
	
	for(int i=0;i<arr_len;i++)
	{
		for(int j=i+1;j<arr_len;j++)
		{
			if(arr[i] <small)
			{
				small = arr[i];
			}
			if(arr[j] > large)
			{
				large = arr[j];
			}
		}
	}
	
	printf("large = %d,small = %d\n",large,small);
	return 0;
}
