#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char szbuffer[120] = { "x*y = 105// he-+d" };
    char* sep = "*/-+";
    char* tok = NULL;

    tok = strtok(szbuffer, sep);
    while (sep != NULL)
    {
        puts(tok);
        tok = strtok(NULL, sep);

    }


  

}

 
