#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int n,value=0;
	int sum = 0,cnt=0;
	scanf("%d",&n);
	double *result = (double*)malloc(sizeof(double) * n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&cnt);
		int *arr = (int*)malloc(sizeof(int) * cnt); // 동적할당 
		for(int j=0;j<cnt;j++)
		{
			scanf("%d",&arr[j]);
			sum += arr[j];
			
		}
		sum = sum/cnt; // 평균값 
		for(int i=0;i<cnt;i++)
		{
			if(arr[i] > sum) // 평균보다 크면
			{
				value++;	
			}	
		} 
		result[i] = double(value)/double(cnt) * 100;
		free(arr);
		sum = 0,value = 0,cnt = 0;
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%.3lf%%\n",result[i]);
	}
	
	free(result);
}
