#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    mkfifo("mypipe", 0666);

    int fd = open("mypipe", O_WRONLY);

    write(fd, "Hello", 5);

    close(fd);
    return 0;
}
