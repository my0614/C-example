#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int num,i,up=0,down=0;
	scanf("%d",&num);
	
	int* arr=(int*)malloc(sizeof(int)*num);

	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num-1;i++)
	{
		if(arr[i] >arr[i+1])
		{
			down++;
		}
		if(arr[i]< arr[i+1])
		{
			up++;
		}
		
	
	}
	printf("%d %d\n",up,down);
}

