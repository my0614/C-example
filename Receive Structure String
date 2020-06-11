#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS



int main()
{
	struct Person
	{
		char name[128];
		int age;
		int number;
	} arr[100];

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d", arr[i].name, &arr[i].age, &arr[i].number);
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d번 %s %d %d\n",i, arr[i].name, arr[i].age, arr[i].number);
	}


    return 0;
}
