#include <stdio.h>
#include <math.h>

int main()
{
	int b,n;
	int result = 0;
	scanf("%d %d",&b,&n);
	int a=0;
	for(int i=1;i<=b;i++)
	{
		
		result =pow(i,n);
		if(result >= b)
		{
			int result2 = 0;
			result2 = b - pow(i-1,n);
			result = result -b;
			if(result2 > result)
			{
				printf("%d",i);
			}
			else
			{
				printf("%d",i-1);
			}
			return 0;
			
		}

	}
	
	
	
}
