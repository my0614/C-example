#include <stdio.h>

struct list{
	int num;
	char name[10];
	int age;
};

struct list check[3]={
	{1,"minyong",19},
	{2, "love", 20},
	{3, "family",33}



};

int main()
{

	struct list *sp;
	for(sp = check; sp != check+3;sp++)
		printf("%d %s %d\n",sp->num,sp->name,sp->age);





return 0;

}
