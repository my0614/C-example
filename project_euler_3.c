#include <stdio.h>

int main()
{
	long long n = 600851475143;
	for(int i=2;i<=n;i++)
	{
		//소인수구하기 
		if(n % i == 0)
		{
			n/= i;
			printf("%d ",i);
		}
		
	}
	return 0;
}
