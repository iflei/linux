#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	umask(0);
	int fd = open("./file", O_CREAT | O_RDWR, 0644);

	close(1);
	dup(fd);

	int i = 0;
	while(i++ < 10)
		printf("dup to file\n");
	
	return 0;
}
