#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct PERSON
{
	char *szname[16];
	char *szphone[32];
};

struct USER
{
	int age;
	struct PERSON person;

};

int main()
{
	struct USER info;
	info.age = 19;
	strcpy(info.person.szname,"minyoung");
	strcpy(info.person.szphone,"010-3957-5034");


	puts(info.person.szname);
	puts(info.person.szphone);
	printf("age : %d\n",info.age);


	return 0;


}
