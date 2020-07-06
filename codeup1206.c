#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int value, value2;
	int result = 0;
	scanf("%d %d", &value, &value2);

	if (value > value2)
	{
		result = value /  value2;
		if (value % value2 == 0)
		{
			printf("%d*%d=%d", value2, result, value);
		}
		else
			printf("none");
	}
	else if (value < value2)
	{
		result = value2 / value;
		if (value2 % value == 0)
		{
			printf("%d*%d=%d", value, result, value2);
		}
		else
			printf("none");
	}
	else if (value == value2)
	{
		result = value / value2;
		if (value % value2 == 0)
			printf("%d*%d=%d", value, result, value2);
	}

	return 0;
}

