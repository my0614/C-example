
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,result=0;
	scanf("%d",&n);
	int *arr = (int*)malloc(sizeof(int) * n);
	int *arr2 = (int*)malloc(sizeof(int) * n);
	//int *result = (*int)malloc(sizeof(int) * n);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d %d", &arr[i] ,&arr2[i]);
	}
	
	for(i=0;i<n;i++)
	{
		result += arr2[i] % arr[i];
	}
	printf("%d",result);
}
