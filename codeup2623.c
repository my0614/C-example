#include <stdio.h>

int main()
{
	int a,b,max,result=0;
	scanf("%d %d",&a,&b);
	int i,j;
	if(a>b)
		max = a;
	else
		max = b;
	

	for(i=1;i<=max;i++)
	{
		
			if(a % i == 0 && b %i ==0)
			{
				result=i;
			
			}
		
	}
			printf("%d ",result);

}
