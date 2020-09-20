
#include <stdio.h>
struct data
{
	int country;
	int number;
	int score; 
};

int main()
{
	
	int i,j,n,tmp,tmp2,tmp3;
	scanf("%d",&n);
	struct data info[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&info[i].country,&info[i].number,&info[i].score);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(info[i].score > info[j].score)
			{
			 	tmp = info[i].score;
			 	info[i].score = info[j].score;
				info[j].score = tmp;
				tmp2 = info[i].number;
			 	info[i].number = info[j].number;
				info[j].number = tmp2;
				tmp3 = info[i].country;
			 	info[i].country = info[j].country;
				info[j].country = tmp3;
				
			}
		}
	}
	printf("%d %d\n",info[0].country, info[0].number);
	printf("%d %d\n",info[1].country, info[1].number);
	if(info[0].country == info[1].country)
	{
		printf("%d %d",info[3].country, info[3].number);
		
	}
	else 
		printf("%d %d",info[2].country, info[2].number);
	
}
