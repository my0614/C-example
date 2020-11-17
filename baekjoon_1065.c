#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int number(int n)
{
	char str[5] ={0};
	int cnt=0;
	int a,b,c;
	if(n<=99)
		return n;
	else if(n == 1000)
		return 144;
	else
	{
		for(int i=100;i<=n;i++)
		{
			a = i%10; // 1의 자리
			b = i /10 % 10; // 10의 자리 
			c = i/10/10%10; // 100의 자리 
			if(c-b == b - a)
				cnt++;	
		}
	}
	return 99+cnt;
}


int main()
{
	int n;
	int result = 0;
	scanf("%d",&n);
	printf("%d",number(n));
   
}

