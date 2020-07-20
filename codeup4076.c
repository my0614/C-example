#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	float m, v;
	int r;
	char exe[5] = { 0 };

	scanf("%d %d %d", &m, &v, &r);
	float result = m / v;
	if (r > result)
		strcpy(exe, "UP");
	else if (r == result)
		strcpy(exe, "STOP");
	else if (r < result)
		strcpy(exe, "DOWN");

	printf("%.2f %s\n",result, exe);

	return 0;

}
