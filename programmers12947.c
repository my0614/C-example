#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int value;
	int a=0, b=0, c=0,d = 0;
	scanf("%d", &value);

	if (value >= 1000)
	{
		a = (value / 1000);//5
		//printf("%d", a);
		b = (value - (a * 1000)) / 100; // 5433
		//printf("%d", b);
		c = (value - (a * 1000)) % 100; // 43
		//printf("%d", c);
		c = c / 10; // 4
		d = c % 10; 
	
		if (value % (a + b + c) == 0)
			printf("True");
		else
			printf("False");
	}

	else if (value >= 100)
	{
		a = (value / 100);//5
		//printf("%d", a);
		b += (value - (a * 100)) / 10; // 4
		//printf("%d", b);
		c += (value - (a * 100)) % 10; // 540 - 50
		//printf("%d", c);
	
		if (value % (a+b+c) == 0)
			printf("True");
		else
			printf("False");
	}

	else if (value >= 10)
	{
		a = (value / 10);//5
		//printf("%d", a);
		b += (value - (a * 10)); // 4
		if (value % (a + b) == 0)
			printf("True");
		else
			printf("False");
	}
	return 0;
}
