#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,max=0,cnt=0,i,j;
	
	scanf("%d %d",&a,&b);
	
	if(a>b)
		max = a;
	else
		max = b;
		
	int arr[max]={0};
	for(i=1;i<=max;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j == 0)
			{
				break;
			}
		}
		if(i==j)
		{
			arr[cnt] = i;
			cnt++;
			
		}
	}
	printf("%d\n%d",cnt,arr[0] + arr[cnt-1]);
	
		
	
	
}
