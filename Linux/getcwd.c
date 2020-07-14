#include <stdio.h>
#include <unistd.h>
#define size 256

void printcwd()
{

	char buffer[size];
	if(getcwd(buffer, size) == NULL);
		exit(1);
	
	printf("%s\n",buffer);

}


int main()
{
	printcwd();
	chdir("/min/love");
	printcwd();
	chdir(".");
	printcwd();
	
	return 0;


}



