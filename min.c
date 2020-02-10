#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *grgv[])
{
   int fd;
char *buffer = "I love csh!";
int writen;

fd = open("string.txt",O_WRONLY | O_CREAT,0644);
writen = write(fd, buffer, strlen(buffer));
printf("writen is %d\n",writen);
printf("write success!!\n");

return 0;
}
