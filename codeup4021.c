#include <stdio.h>
#include <string.h>

int main()
{
	int i,result=0,cnt=0;
	int arr[7] = {0};
	for(i=0;i<7;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<7;i++)
	{
		if(arr[i] %2 == 1)
		{
			result += arr[i];
			cnt++;
		}
		
	}
	if(cnt == 0)
	{
		printf("-1");
	}
	else
		printf("%d",result);
	
	
}
