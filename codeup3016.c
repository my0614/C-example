#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>


int main()
{
	int value,max=0,cnt=0,cnt2=0,state=0;
	scanf("%d", &value);
	char name[100][10] = { 0 };
	int m1[100] = { 0 }, m2[100] = { 0 }, m3[100] = { 0 };
	for (int i = 0; i < value; i++)
	{
		scanf("%s %d %d %d", &name[i], &m1[i], &m2[i], &m3[i]);
	}
	max = m1[0];
	for (int i = 0; i < value; i++)
	{
		if (m1[i] >= max)
		{
			max = m1[i];
			state = i;
		}
			
		
	}
	int a = m2[state], b = m3[state];
	for (int i = 0; i < value; i++)
	{
		if (m2[i] > a)
			cnt++;
		if (m3[i] > b)
			cnt2++;
	}
	printf("%s %d %d", name[state], cnt+1, cnt2+1);

	return 0;
}
