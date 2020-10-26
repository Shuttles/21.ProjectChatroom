/*************************************************************************
	> File Name: common.c
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年10月26日 星期一 19时21分49秒
 ************************************************************************/

#include "head.h"


char *get_conf(char *path, char *key) {
    FILE *fp = NULL;
    ssize_t nrd;
    char *line = NULL, *sub = NULL;//line是存储读到的这一行数据的
    extern char conf_ans[50];
    size_t linecap;

    if (path == NULL || key == NULL) {
        fprintf(stderr, "Error in argument!\n");
        return NULL;
    }

    //打开文件
    if ((fp = fopen(path, "r")) == NULL) {
        perror("fopen");
        return NULL;
    }

    //读文件
    while ((nrd = getline(&line, &linecap, fp)) != -1) {//nrd获取这一行的长度
        //读一行
        if ((sub = strstr(line, key)) == NULL) 
            continue;
        else {
            int len = strlen(key);
            if (line[len] == '=') {
                //找到了
                strncpy(conf_ans, sub + len + 1, nrd - len - 2);
                *(conf_ans + nrd - len - 2) = '\0';
                break;
            }
        }
    }
    free(line);
    fclose(fp);
    if (sub == NULL) {
        return NULL;
    } else {
        return conf_ans;
    }
}
