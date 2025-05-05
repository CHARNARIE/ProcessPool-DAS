#include "server.h"

int exitPipe[2];

void handler(int signum){
    
}

int main(){
    pipe(exitPipe);
    if(fork()){
        // 父进程
        close(exitPipe[0]);// 关闭读端
        signal(SIGUSR1, handler);
        wait(NULL);
        printf("服务端即将退出...\n");
        exit(0);
    }
    // 子进程
    close(exitPipe[1]);// 关闭写端
    threadPool_t threadPool;
    
    return 0;
}