#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,i,j,num2, input,sum=0;
	scanf_s("%d %d", &num,&num2);

	int *arr = (int*)malloc(sizeof(int) * num * num2); 

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num2; j++)
		{
			scanf_s("%d", (arr+(i * num2 + j))); // 규칙찾기
		}
	}

	scanf_s("%d", &input);
	int *output = (int*)malloc(sizeof(int) * input);
	int a, b, x, y;
	for (i = 0; i < input; i++)
	{
		sum = 0;
		scanf_s("%d %d %d %d", &a, &b, &x, &y);
		while (1)
		{
		
			sum += *(arr + (a - 1) * num2 + (b - 1));
			if (a == x && b == y)
				break;
			a++;
			if (num < a)
			{
				a = 1;
				b++;
			}
		}
		output[i] = sum;
	}

	for (i = 0; i < input; i++)
	{
		printf("%d\n", output[i]);
	}
	
	return 0;
}
