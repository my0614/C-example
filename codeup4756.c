#include <stdio.h>

int main()
{
	int a[10],b[10],i,j,cnt=0;
	int result_a=0, result_b = 0;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i] > b[i])
		{
			result_a += 3;
		}
		else if(a[i] < b[i])
		{
			result_b += 3;
		}
		else if(a[i] == b[i])
		{
			result_a++;
			result_b++;
		}
	}
	
	printf("%d %d\n",result_a, result_b);
	if(result_a > result_b)
		printf("A");
	else if(result_a < result_b)
		printf("B");
	else if(result_a == result_b)
	{
		for(i=9;i>=0;i--)
		{
			if(a[i] == b[i])
				cnt++;
			if(a[i] > b[i])
			{
				printf("A");
				return 0;
			}
			else if(a[i] < b[i])
			{
				printf("B");
				return 0;
			}
		}
	}
	if(cnt == 10)
		printf("D");
		
	
	
}
