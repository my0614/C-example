#include <stdio.h>
#include <string.h>

int main()
{
	char num[50];
	int result = 10,i;
	scanf("%s",num);
	
	int len = strlen(num);
	printf("%d\n",len);
	for(i=1;i<len;i++)
	{
		if(num[i] == '(' && num[i-1] == '(')
		{
			result +=5;
		}
		else if(num[i] == ')' && num[i-1] ==')')
		{
			result +=5;
		
		}
		else
			result += 10;
	}
	printf("result = %d",result);
	
}
