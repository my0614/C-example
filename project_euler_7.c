
#include <stdio.h>
#include <math.h>

int main()
{
	int n =2;
	int cnt =0;
	int p_num = 0;
	while(1)
	{

		for(int i=1;i<=n;i++)
		{
			if(n%i == 0)
			{
				cnt++;
			}
		}
		if(cnt == 2)
		{
			//printf("%d\n",n); // 소수값출력 
			p_num++;
		}
		if(p_num == 10001)
		{
			printf("p_num = %d",n);
			return 0;
		}
		n++;
		cnt = 0;
	}
	
	
	
	return 0;
}
