#include <stdio.h>
int num[10000] = {0,};
int SelfNumCheck(int n)
{
	
    int sum = n;
    // 셀프넘버인지 비교 
    while(n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
    
}
int main()
{
    for(int i = 0; i < 10000; i++)
    {
        int idx = SelfNumCheck(i);
        num[idx] = 1;
    }
    for(int i = 0; i < 10000; i++)
        if(!num[i]) printf("%d\n", i);
    return 0;
}

