#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int arr[10];
	int na[10] = {0};
	int cnt=0,tmp;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		na[i] = arr[i] %42;
	}
	int diff;
	diff = na[0];
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(na[i] > na[j])
			{
				tmp = na[i];
				na[i] = na[j];
				na[j] = tmp;
			}
		}
	}
	
	for(int i=1;i<=10;i++)
	{
		if(na[i] != na[i-1])
		{
			cnt++;
		}
	}
		
	printf("%d",cnt);

}
