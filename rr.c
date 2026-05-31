#include <stdio.h>

int main() {
    int bt = 10;
    int tq = 2;

    while (bt > 0) {
        printf("Executed %d units\n", tq);
        bt -= tq;
    }

    return 0;
}
