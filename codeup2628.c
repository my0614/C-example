#include <stdio.h>
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int x,y,x2,y2,result=0;
	scanf("%d %d",&x,&y);
	scanf("%d %d",&x2,&y2);
	
	int i,j=0;
	if(x>y) swap(&x,&y);
	if(x2>y2) swap(&x2,&y2);

	if(x > x2 && y2>x && y >y2)
	{
		printf("cross");
		return 0;
	}
	
	else if(x2>x && y>x2 && y2>y)
	{
		printf("cross");
		return 0;
	}
	

