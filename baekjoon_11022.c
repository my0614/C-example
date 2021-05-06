#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	int *value = (int *)malloc(sizeof(int) * n);
	int *value2 = (int *)malloc(sizeof(int) * n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&value[i],&value2[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("Case #%d: %d + %d = %d\n",i+1,value[i],value2[i],value[i]+value2[i]);
	}
	free(value);
	free(value2);
	return 0;
}
