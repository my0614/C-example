#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS



int main()
{
    char str1[] = "JAVA";
    char str2[] = "C#";
    char str3[] = "C++";

    char* p = str1;
    char* p2 = str2;
    char* p3 = str3;


    int max = 0;
    int s_len = (sizeof(str1) / sizeof(char))-1;
    int s2_len = (sizeof(str2) / sizeof(char))-1;
    int s3_len = (sizeof(str3) / sizeof(char))-1;

    if (s_len > s2_len)
    {
        if (s_len > s3_len)
            max = s_len;
        else if (s3_len > s2_len)
            max = s3_len;
        else
            max = s2_len;

    }
    else if (s2_len > s3_len)
        max = s2_len;
  
    for (int i = 0; i < max; i++)
    {
        
        if (*p == '\0')
            *p = '\0';
        printf("%c %c %c\n", *p++, *p2++, *p3++);
      
    }



 

    return 0;
}
