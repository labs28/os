#include <stdio.h>
#include <unistd.h>

int main() {
    fork();

    printf("Process Created\n");

    return 0;
}
