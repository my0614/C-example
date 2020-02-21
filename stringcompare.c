#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char szname[30] = {0};
	char cpname[30] = {0};

	printf("==szname==\n");
	gets(szname);
	printf("==cpname==\n");
	gets(cpname);

	if(szname[0] != 0 &&memcmp(szname,cpname,2)==0)
	{
		printf("same\n");
	}
	else
	{
		printf("not same\n");
	}






}
