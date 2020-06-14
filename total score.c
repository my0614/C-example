#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{

	int num, i;
	scanf("%d", &num);
	int Math[100]; // 수학
	int English[100]; // 영어
	int result[100]; // 결과값

	for(i = 0; i < num; i++)
	{
		scanf("%d %d", &Math[i], &English[i]);
		result[i] = Math[i] + English[i];
	}

	for(i = 0; i < num; i++)
	{
		printf("i번째 학생 결과: %d\n ", result[i]);
	}
	return 0;
}


