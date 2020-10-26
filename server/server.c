/*************************************************************************
	> File Name: server.c
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年10月26日 星期一 20时12分54秒
 ************************************************************************/

#include "../common/head.h"
#include "../common/common.h"
#include "../common/color.h"
//#include "../common/tcp_server.h"

#define MAX_CLIENT 512

int main() {
    char *port = get_conf("./server.conf", "SERVER_PORT"); 
    printf(PINK("%s") "\n", port);

    return 0;
}
