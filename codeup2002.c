#include <stdio.h>
#include <string.h>

int main()
{
	int k,num;
	char str[20];
	scanf("%d\n",&k);
	gets(str);
	int len = strlen(str);
	
	for(int i=1;i<=len;i++)
	{
		num = 3*i + k;
		int value = str[i-1]-num;
	
		if(value < 65)
		{
			value = 90-(64-value);
		}
	
		printf("%c",value);
	}
}
