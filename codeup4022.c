#pragma warning(disable : 4996)
#include <string.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int d = 0, h = 0, c, rice, i = 0, day;
	double add = 0, sum = 0, work=20000;
	scanf("%d %d", &d, &h);
	if (d < 120)
	{
		c = d / 10;
		//printf("%d", c);
		if (d % 10)
			c++;
		sum += h * (c) * 1000; // 교통비

		rice = h * 5000; // 식비
		sum += rice;
		work = h * 20000; //일비
		sum += work;
		printf("%.0f\n", sum);
		return 0;
	}

	else if (d >= 120)
	{
		sum += (h - 1) * 40000; // 숙박비
		c = d / 10;
		if (d % 10)
			c++;
		sum += (c) * 1000;
		rice = ((h - 1) * 3 + 1) * 5000; // 식비
		sum += rice;

		if (h != 1)
		{
			while (h > 0)
			{
				if (h - 15 >= 0)
					day = 15;
				else
					day = h;

				switch (i)
				{
				case 0:
					work = day * 20000 * 0.5;			break;
				case 1:
					work += day * 20000 * 0.5 * 0.9;	break;
				case 2:
					work += day * 20000 * 0.5 * 0.8;	break;
				case 3:
					work += day * 20000 * 0.5 * 0.8;	break;
				default:
					work += day * 20000 * 0.5 * 0.7;	break;

				}
				h -= day;
				i++;
			}
		}
		sum += work;
		printf("%.0f\n", sum);

		return 0;
	}
}
