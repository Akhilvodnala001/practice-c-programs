#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
int main()
{
	int fd = open("/dev/mychrmod/",O_RDWR);
	if (fd<0)
	{
		perror("open");
	}
	char str[100];
	printf("Enter string for kernel: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] = '\0'; 
	write(fd,str,strlen(str));
	close(fd);
}
