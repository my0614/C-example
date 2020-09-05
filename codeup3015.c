#include <stdio.h>
#include <string.h>

struct aa
{
	char name[10];
	int score;
}info;

int main()
{

	int num,rank,i,j,tmprank;
	char tmpnum[10];
	scanf("%d %d",&num,&rank);
	struct aa info[100];
	for(i=0;i<num;i++)
	{
		scanf("%s %d",&info[i].name,&info[i].score);
	}
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(info[j].score <info[j+1].score)
			{
				tmprank = info[j].score;
				info[j].score = info[j+1].score;
				info[j+1].score = tmprank;
				
				strcpy(tmpnum,info[j].name);
				strcpy(info[j].name,info[j+1].name);

