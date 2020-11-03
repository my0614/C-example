#include <stdio.h>

int main()
{
	int i,value;
	int result[5] = {0,};
	int max = 0;
	float result2= 0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&value);
		result[i] = value;
	
	}
	int min = result[0];
	int min2 = result[3];
	
	for(int i=0;i<3;i++)
	{
		if(min > result[i])
		{
			min = result[i];
		}
	}
	if(min2 > result[4])
	{
		min2 = result[4];
	}
	result2 = min+min2;
	result2 += result2*0.1;
	printf("%.1f\n",result2);
	
	
}
