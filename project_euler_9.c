#include <stdio.h>
#include <math.h>

int main()
{
	double result = 0;
	double result2 = 0;
	for(int i = 100;i<1000;i++)
	{
		for(int j=100;j<1000;j++)
		{
			result = pow(i,2) + pow(j,2);
		result2 = sqrt(result); // 제곱근 
		printf("i = %d j = %d %lf %lf\n",i,j,result, result2);
		if(i + j + result2 == 1000)
		{
			printf("result == %d %d %lf\n\n",i,j,result2);
			return 0;
		}
		}
	}

	
	return 0;
}
