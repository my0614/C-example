#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[100]={0};
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int result=0,toggle=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == 1)
		{
			
			toggle++;
			result += toggle;
			
		}
		else if(arr[i] == 0)
		{
			toggle = 0;
			result += toggle;
		}
	}
	
	printf("%d",result);
	
}
