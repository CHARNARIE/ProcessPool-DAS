#ifndef THREAD_POOL_H
#define THREAD_POOL_H

#include <pthread.h>

// 任务结构体
typedef struct {
    int fd;// 文件描述符
    void (*hanlder)(int, void *);// 事件处理函数
    void *arg;// 处理函数参数
}task_t;

// 线程池结构体
typedef struct {
    pthread_t *threads;// 工作线程数组
    int threadCount;// 线程数量

    int epfd;// epoll文件描述符
    struct epoll_event *events;// epoll事件数组
    int maxEvents;// 最大事件数

    task_t *tasks;// 任务数组
    int maxTasks;// 最大任务数

    int pipeFd[2];// 用于线程间通信的管道
}threadPool_t;


#endif