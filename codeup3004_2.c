#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,cnt1=0,n;
	
	scanf("%d",&n);
	
	int *arr = (int*)malloc(sizeof(int)*n);
	int *cnt = (int*)malloc(sizeof(int)* n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	

	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			
			if(arr[i] > arr[j])
			{
				
				cnt1++;
				
			}
		}
		cnt[i] = cnt1;
		cnt1=0;
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",cnt[i]);	
	}
	
	free(cnt);
	free(arr);
	return 0;

}
