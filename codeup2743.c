#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	int result=0;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d",&d,&e);
	
	if(a+b == c)
		result =1;
	else if(a-b == c)
		result = 2;
	else if(a*b == c)
		result = 3;
	else if(a/b == c)
		result = 4;
	else
		result = 0;
	

	switch(result)
	{
		case 0: printf("NO");break;
		case 1: printf("%d",d+e); break;
		case 2: printf("%d",d-e);break;
		case 3: printf("%d",d*e);break;
		case 4: printf("%d",d/e);	break;	
	}	
	
}
