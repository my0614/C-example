#include <stdio.h>

int main()
{
	int x[4] = {1,3,5,7}; // 초기설정 
	int h[4] = {1,1,1,1}; // 초기설정 
	
	int i,j,sum,cnt=0,hah=0; // 변수선언 
	
	for(i=0;i<4;i++)
	{	
		cnt=i;
		sum = 0;
		for(j=i;j>=0;j--)
		{
			sum += x[cnt--]*h[j]; 
		}
		printf("convolution sum = %d\n",sum);
		
		
	}
}
