#include <stdio.h>
 
int main(void){
    
    int num,ten,one,one2,ten2;
    int cnt = 0;
    scanf("%d",&num);
	int result = num;
		
		while(1)
		{
			ten = num/10;
			one = num%10;
			one2 = (ten+one) % 10;
			ten2 = (one*10) + one2;
			num = ten2;
			cnt++;
			if(ten2 == result)
			{
				printf("%d",cnt);
				return 0;
			}		
		}

    return 0;
}

