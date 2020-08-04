#include <stdio.h>
#include <string.h>

int main()
{
	int a,b,i,max=0,cnt=0;
	int result[4]={0};
	for(i=0;i<4;i++)
	{
		scanf("%d %d",&a,&b);
		cnt += -a+b;
		result[i] = cnt;
	
	
	}
	max = result[0];
	for(i=0;i<4;i++)
	{
		if(max <result[i])
		{
			max = result[i];
		}
	}
	printf("%d",max);
}
