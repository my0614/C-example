#include <stdio.h>
	struct aa{
		int number;
		int gas;
	}data;
	
	
int main()
{
	struct aa data[100];
	int n,tmpnum,tmpgas;
	scanf("%d",&n);


	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&data[i].number,&data[i].gas);
	}
	
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n-i-1;j++)
		{
		
		if(data[j].number>data[j+1].number)
		{
			tmpnum = data[j].number;
			tmpgas = data[j].gas;
			data[j].number = data[j+1].number;
			data[j].gas = data[j+1].gas;
			data[j+1].number = tmpnum;
			data[j+1].gas = tmpgas;
			
			
		}
	}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d %d\n",data[i].number,data[i].gas);

