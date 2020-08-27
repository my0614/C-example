#include <stdio.h>
#include <string.h>


int main()
{	
	int n,i,j,temp;
	scanf("%d",&n);
	int arr[100]= {0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j]  = temp;
			}
		}
	}
	j = n/2;
	 temp = arr[0];
	 arr[0] = arr[j];
	 arr[j] = temp;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
	
	
}


