#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int i,cnt=0;
	int value[4] = { 0 };
	char arr[4][9] = { 0 };
	for (i = 0; i < 3; i++)
	{
		gets(arr[i]);
	}
	
	
	for (i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] == '1')
				cnt++;
			
		}
		if (cnt == 3) //  도
			value[i] = 65;
		if (cnt == 2) // 개
			value[i] = 66;
		if (cnt == 1) // 걸
			value[i] = 67;
		if (cnt == 0) // 윷
			value[i] = 68;
		if (cnt == 4) // 윷
			value[i] = 69;

		printf("%c\n", value[i]);
		cnt = 0;
		
		
	}
	

	return 0;
}
