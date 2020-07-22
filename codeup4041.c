#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[1000];
	int num = 0;
	gets(arr);
	int arr_len = strlen(arr);
	int cnt = 0;
	for (int i = arr_len-1; i >=0; i--)
	{
		
		if (cnt > 0 || arr[i] != '0')
		{
			printf("%c", arr[i]);
			cnt++;
			num += arr[i] - '0';
		}
	
		
	}
	printf("\n%d\n", num);
	return 0;
}
