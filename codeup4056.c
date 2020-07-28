#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
	int value;
	double result = 0;
	scanf("%d", &value);

	if (500 >= value)
	{
		result = value * 0.7;
	}
	else if (500 < value && 1500 >= value)
	{
		result = 350 + (value - 500) * 0.4;
	}
	else if (1500 < value && 4500 >= value)
	{
		result = 750 + (value - 1500) * 0.15;
	}
	else if (4500 < value && 100000 >=value)
	{
		result = 1200 + (value - 4500) * 0.05;
	}
	else if(value > 100000)
	{
		result = 1475 + (value - 10000) *2/100;
	}
	
	printf("%.0f", floor(result));
	return 0;
}
