#include <stdio.h>

int main()
{
	char arr[2][2]={0};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%c",&arr[i][j]);
		}
	}
	
	int a=0,b=0;	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(arr[j][i] == 'U')
			{
				a++;
			
			}
			else if(arr[j][i] == 'D')
			{
				a--;
			
			}
			else if(arr[j][i]== 'R')
			{
				b++;
				
			}
			else if(arr[j][i] == 'L')
			{
				b--;
				
			}
			
		}
	}
	printf("%d %d",a,b);
}
