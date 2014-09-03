#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
    int main()
    {
    int fd,fname;
    mkfifo("fifo1",0600);
    fd=open("fifo1",O_RDONLY);
    int d = 0;
    while(read(fd,&d,sizeof(int))!=0)
    {
	
    }
    close(fd);
    }
