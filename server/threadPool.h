#ifndef THREAD_POOL_H
#define THREAD_POOL_H

#include <pthread.h>
#include "taskQueue.h"

// 工人线程tid数组
typedef struct tidArr_s{
    pthread_t *arr;
    int workerNum;
}tidArr_t;

int tidArrInit(tidArr_t *tidArr, int workerNum);

typedef struct threadPool_s{
    tidArr_t tidArr;// 工人线程的信息
    taskQueue_t taskQueue;// 任务队列
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int exitFlag;
}threadPool_t;

#endif