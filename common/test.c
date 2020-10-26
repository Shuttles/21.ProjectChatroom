/*************************************************************************
	> File Name: test.c
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年10月26日 星期一 20时37分05秒
 ************************************************************************/

#include "head.h"
#include "common.h"

char ans[50] = {0};
int main() {
    printf("%s\n", get_conf("./a.conf", "SERVERIP"));
    return 0;
}
