#include <stdio.h>

int main()
{
	int num = 1,num2 = 2, result = 0;
	int sum = 0;
	for(;;)
	{
		if(num >= 4000000)
		{
			printf("sum = %d",sum);
			return 0;
		}
		printf("num = %d\n",num);
		if(num % 2 == 0)
		{
			sum += num;
		}
		result = num + num2;
		num = num2;
		num2 = result;
	}
	return 0;
}
