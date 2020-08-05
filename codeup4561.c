#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>


int main()
{
	int value,i,result = 0,cnt=0;
	int arr[7] = { 0 };
	
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &value);
		if (value % 2 == 1)
		{
			arr[cnt] = value;
			result += value;
			cnt++;
		}
		
	}
	

	int min = arr[0];
	for (i = 0; i < cnt; i++)
	{
		if (min > arr[i])
			if(arr[i] != 0)
				min = arr[i];
			

	}
	printf("%d %d",  result,min);


	return 0;
}
