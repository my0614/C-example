#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main()
{
	int n,sum=0;
	scanf("%d",&n);
	char *str = (char*)malloc(sizeof(char) * n);
	scanf("%s",str);
	int len = strlen(str);
	for(int i=0;i<len;i++)
	{
		sum += str[i]-48;
	}
	printf("%d\n",sum);
}

