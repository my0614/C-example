#include <stdio.h>

void Str(char *name)
{
	if(*name == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*name);
	Str(name+1);
}

int main()
{
	Str("min");
	return 0;
}
