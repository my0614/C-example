#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int input;
	scanf("%d", &input);

	if (input == 11 || input == 12 || input == 13)
	{
		printf("%dth", input);
	}
	else
	{
		int mok = input / 10;
		switch (input - (mok * 10))
		{
		case 1: printf("%dst", input); break;
		case 2 :printf("%dnd", input); break;
		case 3:printf("%drd", input); break;
		default:printf("%dth", input);
		}
		
	}
	return 0;
}

~

