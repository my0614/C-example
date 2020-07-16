#include <stdio.h>
#include <unistd.h>

void fun1(void);
void fun2(void);

int main()
{
        printf("hello\n");
        atexit(fun1);
        atexit(fun2);

        printf("bye!\n");
        exit(0);


}

void fun1()
{
        printf("fun1\n");

}

void fun2()
{
        printf("fun2\n");

}

