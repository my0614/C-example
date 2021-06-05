#include <stdio.h>

int main()
{
    int n,cnt = 0,value;
    int prime_cnt = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&value);
        for(int j=1;j<=value;j++)
        {
            if(value % j == 0)
                cnt++;
        }
        if(cnt == 2)
        {
            prime_cnt++;
        }
        cnt = 0;
    }
    printf("%d",prime_cnt);
    return 0;
}
