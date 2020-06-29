#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int input;
	scanf("%d", &input);
	int re = 0,cnt=0;

	while (1)
	{	
		if (input == 1)
		{
			break;
		}

		if (input % 2 == 0)
		{
			input =  (input / 2);
			cnt++;
		}
		else if (input % 2 == 1)
		{
			input = (input* 3) + 1;
			cnt++;
		}
		
	}
	printf("%d\n", cnt);

	

	return 0;
}
