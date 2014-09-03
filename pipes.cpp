#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
    int main()
    {
    int fd,fd1;
    fd=open("fifo1",O_WRONLY);
    int data = 1;
    while (1){
    write(fd,&data,sizeof(int));
    sleep(10);
    data++;
    }

    //printf("File Content :%s",s1);
    }
