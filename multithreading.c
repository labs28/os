#include <stdio.h>
#include <pthread.h>

void *show(void *arg) {
    printf("Thread Executed\n");
    return NULL;
}

int main() {
    pthread_t t1, t2;

    pthread_create(&t1, NULL, show, NULL);
    pthread_create(&t2, NULL, show, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}
