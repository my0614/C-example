#include <stdio.h>

int main()
{
    int score,sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&score);
        if(score >40)
        {
            sum+= score;   
        }
        else
        {
            sum+= 40;
        }
    }
    printf("%d",sum/5);
    return 0;
}
