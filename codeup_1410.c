#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000];
    int f=0,b=0;
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i] == '(')
        {
            f++;
        }
        if(str[i] == ')')
        {
            b++;
        }
        
    }
    printf("%d %d",f,b);
    return 0;
}

