#ifndef THREAD_POOL_H
#define THREAD_POOL_H

#include <pthread.h>
#include "taskQueue.h"

// 工人线程tid数组
typedef struct workerInfo_s{
    pthread_t *tid;
    int workerNum;
}workerInfo_t;

int workerInfoInit(workerInfo_t *workerInfo, int workerNum);

typedef struct threadPool_s{
    workerInfo_t workerId;// 工人线程的信息
    taskQueue_t taskQueue;// 任务队列
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int exitFlag;
}threadPool_t;

int threadPoolInit(threadPool_t *pthreadPool, int workerNum);
int makeWorker(threadPool_t *pthreadPool);

int epollAdd(int epfd, int fd);
int epollDel(int epfd, int fd);


#endif