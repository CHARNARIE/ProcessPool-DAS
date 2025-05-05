#include "server.h"

int workerInfoInit(workerInfo_t *workerInfo, int workerNum){
    workerInfo->tid = (pthread_t *)calloc(workerNum, sizeof(pthread_t));
    if(workerInfo->tid == NULL){
        printf("calloc失败\n");
        return -1;
    }
    workerInfo->workerNum = workerNum;
    return 0;
}

int threadPoolInit(threadPool_t *pthreadPool, int workerNum){

}
