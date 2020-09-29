#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,serch;
	scanf("%d",&n);
	int *arr = (int*)malloc(sizeof(int) *n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&serch);
	for(i=0;i<n;i++)
	{
		if(arr[i] == serch)
		{
			printf("%d",i+1);
			exit(0);
		}
	}
	printf("-1");
	return 0;
	
	
}
