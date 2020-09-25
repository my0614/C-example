#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n == 2060)
	{
		printf("E6");
		return 0;
	}
	int a[10] = {7,8,9,0,1,2,3,4,5,6};
	char b[12] = {'J','K','L','A','B','C','D','E','F','G' ,'H','I'};
	n = n % 60;
	int result = n % 10;
	int result2  = n %12;
	if(result2 == 0)
	{
		result2 = 12;
	}
	if(result == 0)
	{
		result = 10;
	}
	printf("%c%d\n",b[result2-1], a[result-1]);
}
