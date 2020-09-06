#include <stdio.h>

struct aa
{
	int num;
	int number;
	int result;
	int num2;
}value;

int main()
{
	
	int num,i,j,tmpnum,tmpnumber;
	scanf("%d",&num);
	struct aa value[100];
	for(i=0;i<num;i++)
	{
		scanf("%d",&value[i].num);
		value[i].num2 = value[i].num;
		value[i].result = i;
		value[i].number =i;
		
	}
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(value[j].num > value[j+1].num)
			{
				tmpnum = value[j].num;
				value[j].num= value[j+1].num;
				value[j+1].num = tmpnum;
				tmpnumber = value[j].number;
				value[j].number= value[j+1].number;
				value[j+1].number = tmpnumber;
			}
		}
	}
	
	
	for(i=0;i<num;i++)
	{
	
		for(int j=0;j<num;j++)
		{
			
			if(value[j].num == value[i].num2)
			{
				printf("%d ",value[j].result);
			
			}
		}
	
	}
	
}
