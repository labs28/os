#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    if (fork() == 0)
        printf("Child\n");
    else {
        wait(NULL);
        printf("Parent\n");
    }
    return 0;
}
