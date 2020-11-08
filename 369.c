#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a,b;
	int i,j;
	char str[3]={0,};
	
	scanf("%d %d",&a,&b);

	for(i=a;i<=b;i++)
	{
		itoa(i,str,10);
		//printf("str = %s\n",str);
		int len = strlen(str);
		for(j=0;j<len;j++)
		{

			if(str[j] == '3'|| str[j] == '6' || str[j] == '9')
			{
				printf("k\n");
				break;
			}
			
		}
		if(str[j] == '3'|| str[j] == '6' || str[j] == '9'){}
		
		else
		{
			printf("%s\n",str);
		}

	}

	return 0;
}
