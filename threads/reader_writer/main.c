#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>

static pthread_t heartbeatThread;
static pthread_t readerThreadsArray[3];
static pthread_t writerThreadsArray[1];
static pthread_mutex_t rwLock;

void sigintHandler(int intNum) {
    pthread_cancel(heartbeatThread);
    pthread_join(heartbeatThread, NULL);

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

void readerTask(void *pvParameters) {
    while (1) {
        pthread_mutex_lock(&rwLock);
        printf("reader thread acquired lock\n");
        pthread_mutex_unlock(&rwLock);
    }
}

void writerTask(void *pvParameters) {
    while (1) {
        pthread_mutex_lock(&rwLock);
        printf("writer thread acquired lock\n");
        pthread_mutex_unlock(&rwLock);
    }
}

void rwLockInit() {
    pthread_mutex_init(&rwLock, NULL);
}

void initializeThreads() {
    (void)pthread_create(&heartbeatThread, NULL, (void *)&heartbeatTask, NULL);
    (void)pthread_create(&readerThreadsArray[0], NULL, (void *)&readerTask, NULL);
    (void)pthread_create(&writerThreadsArray[0], NULL, (void *)&writerTask, NULL);
}

int main() {
    signal(SIGINT, sigintHandler);
    initializeThreads();

    while (1);
    return 0;
}