#include <stdio.h>
#include <unistd.h>

int main() {
    if (fork() == 0) {
        sleep(5);
        printf("Orphan Child\n");
    } else {
        printf("Parent Exits\n");
    }
    return 0;
}
