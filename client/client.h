#ifndef CLIENT_H
#define CLIENT_H
// 主头文件
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/mman.h>
#include "cmd.h"
#include "connect.h"
#include "file.h"

#define IP "192.168.186.128"
#define PORT "12345"

// 成功不打印，失败报错提示:cd, remove, mkdir, rmdir
// 成功打印字符串，失败报错提示:ls, pwd

#endif
