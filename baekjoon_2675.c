#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main()
{
	int n;
	int cnt;
	char str[20] = {0,};
	scanf("%d",&n);
	for(int i= 0;i <n;i++)
	{
	
		scanf("%d ",&cnt);
		scanf("%s",&str);
		int len = strlen(str);
		for(int j=0;j<len;j++)
		{
			for(int k=0;k<cnt;k++)
			{
				printf("%c",str[j]);
			}
		}
		printf("\n");
	}
}

