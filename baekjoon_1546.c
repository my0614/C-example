#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int n;
	scanf("%d",&n);
	double *arr = (double *)malloc(sizeof(double) * n);
	double *result = (double *)malloc(sizeof(double) * n);
	double avg=0;
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&arr[i]);
	}
	int max = arr[0];
	// 최대값구하기 
	for(int i=0;i<n;i++)
	{
		if(max < arr[i])
			max = arr[i];
	}
	for(int i=0;i<n;i++)
	{
		result[i] = arr[i] / max * 100;
		avg += result[i];
	}
	avg = avg/n;
	printf("%lf",avg);
	

	 
	
}
