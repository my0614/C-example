#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
	int num;
	int i,h =0;
	int result = 0;
	scanf("%d", &num);
	h = num % 3;
	i =  num / 3;
	if (h == 0)
	{
		h += 4;
		i--;
	}
		
	result =  i*10 + h;
	printf("%d\n", result);

	return 0;
}


