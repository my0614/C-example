#include <stdio.h>
#include <string.h>

int main()
{

	int result  = 0,max = 0,str_len = 0;

	char str[6];
	int val_index[6] = {0,}; // 3자리수이기때문에 999*999 값인 6자리 값 
	for(int i = 999;i>= 100;i--)
	{
		for(int j = 999;j>=100;j--)
		{
			result = i*j;
			sprintf(str,"%d",result);
			str_len = strlen(str);
			val_index[5]=result%10;
			val_index[4]=(result/10)%10;
			val_index[3] = (result/100)%10;
			val_index[2]=(result/1000)%10;
			val_index[1]=(result/10000)%10;
			val_index[0]=(result/100000)%10;
			if(str_len == 6)
			{
				if((val_index[0] == val_index[5]) && (val_index[1] == val_index[4]) && (val_index[2] == val_index[3]))
				{
					if(max <result)
					{
						max= result;
					}
				}
			}
		}
	}
	printf("%d",max);
	return 0;
}
