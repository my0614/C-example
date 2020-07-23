#pragma warning(disable : 4996)
#include <string.h>
#include <stdio.h>

int main()
{
	float max,min;
	int num;
	char color[10];
	float arr[100] = { 0 };
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%f", &arr[i]);
	}
	
	 max = min = arr[0];
	for (int i = 1; i <= num; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	if (max >= 32 && max < 35)
		strcpy(color, "yellow");
	else if (max >= 35)
		strcpy(color, "red");	
	else
		strcpy(color, "green");

	printf("%.1f\n%s", max, color);

}
