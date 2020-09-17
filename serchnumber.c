
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j,tmp,cnt = 0;
	int arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			scanf("%d",&arr[i]);

		
		
				
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i] != n)
			{
				cnt++;
			}
		for(j=0;j<n;j++)
		{
			
			if(arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;	
			}
		}
	}
	if(cnt == n)
	{
		printf("-1");
		return 0;
	}
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
}
