#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>

#define SPACE_CAPACITY 5

static pthread_t heartbeatThread;
static pthread_t producerThread;
static pthread_t consumerThread;

static pthread_mutex_t lock;
static int occupancy;
static pthread_cond_t spaceNotFull;
static pthread_cond_t spaceNotEmpty;

static char space[SPACE_CAPACITY];

void printSpaceDiagram() {
    // int val;
    // sem_getvalue(&occupancy, &val);
    switch(occupancy) {
        case 1:
            printf("[x]-[ ]-[ ]-[ ]-[ ] \n");
        break;
        case 2:
            printf("[x]-[x]-[ ]-[ ]-[ ] \n");
        break;
        case 3:
            printf("[x]-[x]-[x]-[ ]-[ ] \n");
        break;
        case 4:
            printf("[x]-[x]-[x]-[x]-[ ] \n");
        break;
        case 5:
            printf("[x]-[x]-[x]-[x]-[x] \n");
        break;
        default:
            printf("[ ]-[ ]-[ ]-[ ]-[ ] \n");
        break;
    }
}

void sigintHandler(int intNum) {
    pthread_cancel(heartbeatThread);
    pthread_join(heartbeatThread, NULL);

    pthread_cancel(producerThread);
    pthread_cancel(consumerThread);

    // Exit current process.
    printf("Interrupt Signal Captured. Exiting...\n");
    exit(0);
}

void heartbeatTask(void *pvParameters) {
    static int count = 0;
    while (1) {
        printf("heartbeat...%d\n", count++);
        sleep(1);
    }
}

void consumerTask(void *pvParameters) {
    while (1) {

        pthread_mutex_lock(&lock);
        
        // Is there any items to consume? Use conditional variables to check.
        while (occupancy == 0) {
            pthread_cond_wait(&spaceNotEmpty, &lock);
        }

        printf("consumer thread consumed one item. ");
        printSpaceDiagram();

        occupancy--;
        pthread_cond_signal(&spaceNotFull);
        sleep(1);

        pthread_mutex_unlock(&lock);
    }
}

void producerTask(void *pvParameters) {
    while (1) {
        int val;
        pthread_mutex_lock(&lock);
        printf("producer thread produced one item. ");

        // Is there any items to consume? Use conditional variables to check.
        while (occupancy == SPACE_CAPACITY) {
            pthread_cond_wait(&spaceNotFull, &lock);
        }

        occupancy++;
        pthread_cond_signal(&spaceNotEmpty);

        printf("consumer thread consumed one item. ");
        printSpaceDiagram();
        sleep(1);

        pthread_mutex_unlock(&lock);
    }
}


void initializeThreads() {
    (void)pthread_create(&heartbeatThread, NULL, (void *)&heartbeatTask, NULL);
    (void)pthread_create(&producerThread, NULL, (void *)&producerTask, NULL);
    (void)pthread_create(&consumerThread, NULL, (void *)&consumerTask, NULL);


    pthread_cond_init(&spaceNotFull, NULL);
    pthread_cond_init(&spaceNotEmpty, NULL);
}

int main() {
    // Register for the proper behavior of interrupt signal handler.
    signal(SIGINT, sigintHandler);

    // Initialize reader and writer threads.
    initializeThreads();

    while (1);
    return 0;
}