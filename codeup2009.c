#include <stdio.h>

int main()
{
	int k,n;
	int cnt = 0;
	scanf("%d %d",&k,&n);
	
	while(1)
	{
		k = k-n;
		if(k < 0)
		{
			printf("%d",cnt);
			return 0;
		}
		cnt ++;
		k++;
		if(k < n)
		{
			printf("%d",cnt);
			return 0;
		}
	}
	
	
}
