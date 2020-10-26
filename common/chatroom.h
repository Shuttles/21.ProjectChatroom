/*************************************************************************
	> File Name: chatroom.h
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年10月26日 星期一 19时22分04秒
 ************************************************************************/

#ifndef _CHATROOM_H
#define _CHATROOM_H

#include "head.h"

struct Msg {
    char from[20];//从哪个client端发过来的
    int flag;//0 : 公聊信息，1 : 私聊信息, 2 : 服务器的通知信息或客户端的连接请求， 3 : 断开连接的请求
    char message[512];//真正的内容
};

struct RecvMsg {
    struct Msg msg;
    int retval;
};




#endif
