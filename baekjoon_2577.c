
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char str[20]={0};
	char word[11]={0};
	int len = 0,index=48,cnt=0,k=0;
	int a,b,c,result = 0;
	
	scanf("%d %d %d",&a,&b,&c);
	result = a*b*c;
	sprintf(str,"%d",result);
	//printf("result = %d\n",result);
	len = strlen(str);
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(str[j] == index)
			{
				cnt++;
			}
		}
		word[k] = cnt;
		index++;
		cnt = 0;		
		k++;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d\n",word[i]);
	}

}
