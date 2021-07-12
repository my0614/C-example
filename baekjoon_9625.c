#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int a=0,b=1,c = 0;
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(i > n-2)
		printf("%d ",c);
		a = b;
		b = c;
		c = a+b;
	}
	return 0;
	
}
