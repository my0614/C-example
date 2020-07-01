#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int value,i,result=0;
	scanf("%d", &value);
	for (i = 0; i < value; i++)
	{
		if (value == (i * i))
		{
			result = i;
			printf("%d", (result + 1) * (result + 1));
			return 0;

		}
		
			
	}	
	printf("-1");
	
	
		
	
	return 0;
}
