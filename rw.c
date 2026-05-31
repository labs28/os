#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t wrt;
pthread_mutex_t mutex;

int readcount=0;

void *reader()
{
    pthread_mutex_lock(&mutex);

    readcount++;

    if(readcount==1)
        sem_wait(&wrt);

    pthread_mutex_unlock(&mutex);

    printf("Reader is Reading\n");

    pthread_mutex_lock(&mutex);

    readcount--;

    if(readcount==0)
        sem_post(&wrt);

    pthread_mutex_unlock(&mutex);

    return NULL;
}

void *writer()
{
    sem_wait(&wrt);

    printf("Writer is Writing\n");

    sem_post(&wrt);

    return NULL;
}

int main()
{
    pthread_t r,w;

    sem_init(&wrt,0,1);
    pthread_mutex_init(&mutex,NULL);

    pthread_create(&r,NULL,reader,NULL);
    pthread_create(&w,NULL,writer,NULL);

    pthread_join(r,NULL);
    pthread_join(w,NULL);

    return 0;
}
