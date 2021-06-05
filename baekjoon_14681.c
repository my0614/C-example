#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    //1사분면
    if(x>0 && y>0)
    {
        printf("1");        
    }
    //2사분면
    else if(x<0 && y>0)
    {
        printf("2");        
    }
    //3사분면
    else if(x<0 && y<0)
    {
        printf("3");        
    }
    //4사분면
    else if(x>0 && y<0)
    {
        printf("4");        
    }


    return 0;
}
