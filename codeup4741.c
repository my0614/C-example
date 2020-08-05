#include <stdio.h>
#include <string.h>

int main()
{
	int hour, min,plus; 
	scanf("%d %d",&hour, &min);
	scanf("%d",&plus);
	min = min+plus;
	
	while(min > 59)
	{
		hour++;
		min = min-60;
	}
		
	if(hour >=24)
	{
		hour =hour-24;
		
	}
	printf("%d %d",hour, min);
	return 0;
}

