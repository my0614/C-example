#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int cnt=1;
	i = 1;
	for(cnt=0;cnt<=(n*2)-1;cnt=cnt+2)
		{	
			for(k =n-i;k >0;k--)
			{
				printf(" ");
			}
			for(j=0;j<=cnt;j++)
			{
				printf("*");	
			}
			printf("\n");
			
			i++;
		}
	cnt=cnt-2;
	i = 0;
	for(cnt=cnt-2;cnt>=0;cnt=cnt-2)
	{
		for(k = 0; k <=i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=cnt;j++)
		{
			printf("*");
		}
		printf("\n");
		i++;
	}
	
	return 0;
}
