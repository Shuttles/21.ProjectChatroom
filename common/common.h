/*************************************************************************
	> File Name: common.h
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年10月26日 星期一 19时20分48秒
 ************************************************************************/

#ifndef _COMMON_H
#define _COMMON_H

char conf_ans[50] = {0};
char *get_conf(char *path, char *key);//用来获取配置信息：从path路径下取key配置的值,返回指针

#endif
