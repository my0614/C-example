#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
 int fd;
 char buffer[1024];
 int readn;
 fd = open("string.txt", O_RDONLY, 0644);
 readn = read(fd, buffer, 1024);
 printf("read is %d\n",read);
 printf("%s\n", buffer);
 close(fd);
 return 0;
}
