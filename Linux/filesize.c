#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	char buf[512];
	int fd;
	long total = 0;
	ssize_t nread; // signed interger

	if((fd = open(argv[0], O_RDONLY)) == -1)
	{
		perror(argv[1]);
	}

	while((nread = read(fd, buf, 512)) > 0)
	{
		total += nread;
	}
	close(fd);

	printf("filesize is %ld byte \n",total);
	
	exit(0);
	



return 0;
}
