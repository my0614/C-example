#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* aszData[3]={
		"Test string",
		"Sample data",
		"Array of array"
	
	};

	char  *pszData ="Test string";
	printf("%c\n",*pszData);
	printf("%p\n",pszData+1);

}

