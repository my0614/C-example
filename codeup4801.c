#include <stdio.h>

int main()
{
	int k,n,m;
	scanf("%d %d %d",&k,&n,&m);
	int result=0;
	result = m -(k*n);
	if(result > 0)
		printf("0");
	else
		printf("%d",result * -1);
}
