#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i;
	
	gets(str);
	int len = strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i] != ' ')
			printf("%c",str[i]);
	}
	
}

