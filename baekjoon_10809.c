#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main()
{
	char str[100] = {0};
	int index[26];
	int c,value = 0,value2=0;
	memset(index,-1,26 * sizeof(int)); // memset 사용할때 주의사항 

	scanf("%s",str);
	int len = strlen(str);
	
	for(int i=0;i<len;i++)
	{
		c = str[i] - 97;
		if(index[c] == -1)
		{
			index[c] = i;	
		}
	}
	
	for(int i=0;i<26;i++)
	{
		printf("%d ",index[i]);
	}
	
}

