#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("test.txt", O_RDONLY);

    lseek(fd, 5, SEEK_SET);

    char ch;
    read(fd, &ch, 1);

    printf("%c\n", ch);

    close(fd);

    return 0;
}
