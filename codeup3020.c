
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m,i,j,cnt=0;
	scanf("%d",&n);
	int arr[1000],arr2[1000],result[1000];
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&m);

	for(i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
		for(j=0;j<n;j++)
		{
			if(arr2[i] == arr[j])
			{
			
				result[i] = j+1;
				cnt++;
			}
		}
		if(cnt == 0)
		{
			result[i] = -1;
			
		}
		cnt =0;
		printf("%d ",result[i]);
		
			
	}
	

}
