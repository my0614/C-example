#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char phone[50];
	gets(phone);
	int phone_len = strlen(phone);

	if (phone_len <= 4 || phone_len >= 20)
	{
		printf("error\n");
		return 0;
	}
		

	for (int i = 0; i < phone_len; i++)
	{
		if (i >= phone_len - 4)
		{
			phone[i] = '*';
			printf("%c", phone[i]);
		}
		else
		printf("%c", phone[i]);

	}
	return 0;
}
