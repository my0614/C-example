#include <stdio.h>
#include <string.h>

int main()
{	
	int a,b,i;
	scanf("%d %d",&a,&b);
	if(a/b > 0)
		a = a %b;
		
	for(i=0;i<10;i++)
	{
		a *= 10;
		printf("%d",a / b);
		a = a %b;
	}
	
}



