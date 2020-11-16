#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int n,cnt=0;
	scanf("%d",&n);
	char str[80] = {0};
	int *result = (int*)malloc(sizeof(int) * n); // 결과값 
	for(int i=0;i<n;i++)
	{
		scanf("%s",str);
		for(int j=0;j<strlen(str);j++)
		{
			if(str[j] == 'O')
			{
				cnt++;
				result[i] += cnt;
				//printf("result = %d\n",result);
			
			}
			else
				cnt = 0;
		}
		cnt = 0;
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",result[i]);
	}
	
	free(result);
}
