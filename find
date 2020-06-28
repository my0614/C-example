#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int month=0, day=0;
	int mon[12] = { 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char* data[7] = {"Thu" ,"Fri","Sat","Sun" ,"mon","Tue","Wen"};
	int i,h=0;
	scanf("%d %d", &month, &day);
	
	for (i = 0; i < month; i++)
		h += mon[i];

	h += day;
	h = (h % 7)-1;
	if (month == 1)
	{
		h = 0;
		h += day;
		h = h % 7;
	}
	printf("%s", data[h]);


	return 0;
}


