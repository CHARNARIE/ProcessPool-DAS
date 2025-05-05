#ifndef SERVER_H
#define SERVER_H

#include <sys/epoll.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include "threadPool.h"
#include "file.h"
#include "taskQueue.h"

#define IP "192.168.186.128"
#define PORT "12345"
#define THREAD_NUM 3

int tcpInit(char *ip, char *port);

#endif