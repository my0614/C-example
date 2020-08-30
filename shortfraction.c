#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,a,b;
	char num[5]={0};
	scanf("0.%s",&num);
	int num2 = atoi(num);
	int num_len = strlen(num);
	int result = pow(10,num_len);
	if(result == 1)
		result = 10;
		
	for(i=num2;i>=0;i++)
	{
		if((result % i)== 0 && (num2 % i) ==0)
		{		
		
			printf("%d %d\n",num2/i,result/i);
			return 0;
		}
	}

	
}
