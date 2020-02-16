#include <stdio.h>

int main()
{
	char *pszData = "Test String";
	printf("%s\n", ++pszData);
	printf("%c\n", *pszData++);
	printf("%c\n", *--pszData);
	printf("%c\n", (*pszData)+2);


}
