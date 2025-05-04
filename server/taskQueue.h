#ifndef TASK_QUEUE
#define TASK_QUEUE

typedef struct node_s {
    int netfd;
    struct node_s *next;
}node_t;

typedef struct taskQueue_s {
    node_t *head;
    node_t *tail;
    int queueSize;
}taskQueue_t;

int taskQueueInit(taskQueue_t *p);
int enQueue(taskQueue_t *p, int netfd);
int deQueue(taskQueue_t *p);

#endif