#include <stdio.h>
#include <unistd.h>

int main() {
    if (fork() == 0)
        printf("Child Process\n");
    else {
        sleep(10);   // Child becomes zombie
        printf("Parent Process\n");
    }
    return 0;
}
