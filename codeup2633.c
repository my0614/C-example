#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,k,i,cnt=0,j=0;
	scanf("%d %d",&n,&k);
	int *arr = (int*)malloc(sizeof(int) * n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<n;i++)
	{ 
	
		
		if(arr[i] >= k)
		{
				cnt = j;
				printf("%d",cnt+1);
				return 0;
		}
		j++;
	}
	
	if(cnt == 0)
		printf("%d",n+1);
	
	
}

