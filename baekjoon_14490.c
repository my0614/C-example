#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d:%d",&a,&b);
    for(int i =a;i>=1;i--)
    {
        if(a%i == 0 && b%i ==0)
        {
            printf("%d:%d",a/i,b/i);
            return 0;
        }
    }
}
