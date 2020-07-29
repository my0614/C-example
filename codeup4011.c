#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char birth[20];
	int sex=10,year;
	scanf("%s",birth);
	int birth_len = strlen(birth);
	if (birth[7] == '1' || birth[7] == '3')
		sex = 0;
	else if (birth[7] == '2' || birth[7] == '4')
		sex = 1;

	if (birth[7] == '1' || birth[7] == '2')
	{
		if(sex == 1)
			printf("19%c%c/%c%c/%c%c F", birth[0], birth[1], birth[2], birth[3], birth[4], birth[5]);
		else
			printf("19%c%c/%c%c/%c%c M", birth[0], birth[1], birth[2], birth[3], birth[4], birth[5]);

		
	}
		
	else if (birth[7] == '3' || birth[7] == '4')
		if (sex == 1)
			printf("20%c%c/%c%c/%c%c F", birth[0], birth[1], birth[2], birth[3], birth[4], birth[5]);
		else
			printf("20%c%c/%c%c/%c%c M", birth[0], birth[1], birth[2], birth[3], birth[4], birth[5]);
	return 0;
}
