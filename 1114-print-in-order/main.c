#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

typedef struct 
{
  sem_t firstJobDone;
  sem_t secondJobDone;
} Foo;

Foo* fooCreate() 
{
    Foo* obj = (Foo*)malloc(sizeof(Foo));

    
    sem_init(&(obj->firstJobDone), 0, 0);  // *sem_t, pshared, value. If pshared is 0, it is shared between one process, if it is 1, it is shared between processes.
    sem_init(&(obj->secondJobDone), 0, 0);
    return obj;
}

// A thread function need to have form void* func (void*)
void *first(void* arg)
{
    Foo* obj = (Foo*) arg;

    printf("first\n");
    fflush(stdout);
    sem_post(&(obj->firstJobDone));  // increments the sephamore
}

void *second(void* arg)
{
    Foo* obj = (Foo*) arg;
    sem_wait(&(obj->firstJobDone)); // wait here if the sephamore is not incremented before
    
    printf("second\n");
    fflush(stdout);
    sem_post(&(obj->secondJobDone)); // increments the sephamore
}

void *third(void * arg)
{
    Foo* obj = (Foo*) arg;
    sem_wait(&(obj->secondJobDone));
    fflush(stdout);
    printf("third\n");
}

void fooFree(Foo* obj)
{
    free(obj);
}

void main() 
{
    Foo* obj = fooCreate();
    pthread_t ta, tb, tc;
    pthread_create(&ta, NULL, first, obj);
    pthread_create(&tb, NULL, second, obj);
    pthread_create(&tc, NULL, third, obj);

    // pthread_join blocks the calling thread until they terminates.
    pthread_join(ta, NULL);
    pthread_join(tb, NULL);
    pthread_join(tc, NULL);
    fooFree(obj);
}