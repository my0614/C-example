#include <stdio.h>

int main()
{
	int n,i,cnt =0;
	int arr[5] = {0};
	scanf("%d",&n);
	for(i = 0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(arr[i] == n)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
