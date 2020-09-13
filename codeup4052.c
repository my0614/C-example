#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[10]={0};
	int i,j,ch;
	int result[10]={0};
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	char value[7];
	for(i=0;i<10;i++)
	{
		sprintf(value,"%d",arr[i]);
		int len = strlen(value);
		
		for(j=0;j<len;j++)
		{
			result[i] += value[j]-48;
		}	
	
		
	}
	
	int tmp;
	for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				if(result[i] > result[j])
				{
					tmp = result[i];
					result[i] = result[j];
					result[j] = tmp;
				}
			}
		}
		
	printf("%d %d",result[0],result[9]);	
		
}
