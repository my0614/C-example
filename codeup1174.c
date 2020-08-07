#include <stdio.h>
#include <string.h>

int main()
{
	unsigned int hour, min,result=0;
	scanf("%d %d",&hour, &min);
	hour += 24;
	result = 60*hour+ min;
	result = result -30;
	hour = result/ 60;
	hour = hour %24;
	min = result %60;
	printf("%d %d",hour, min);
}
