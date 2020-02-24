#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Getname(char *pszname)
{
	printf("input : ");
	gets(pszname);
}

int main()
{
	char szname[16] = {0};
	Getname(szname);
	printf("my name is %s\n",szname);
	return 0;
}
