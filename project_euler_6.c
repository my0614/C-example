#include <stdio.h>
#include <math.h>

int square_sum(int a)
{
	int result = 0;
	for(int i = 1;i<=a;i++)
	{
		result+=pow(i,2);
	}
	printf("result = %d",result);
	return result;
}

int sum_square(int a)
{
	int result = 0;
	for(int i=1;i<=a;i++)
	{
		result += i;
	}
	result = pow(result,2);
	
	printf("result2 = %d",result);
	return result;
}

int main()
{
	int value,value2;
	value = square_sum(100);
	value2 = sum_square(100);
	printf("\n\n%d",value2 - value);
	return 0;
}

