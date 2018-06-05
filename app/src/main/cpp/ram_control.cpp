//
// Created by zhaojie on 2018/6/4.
//

#include <cstring>
#include "ram_control.h"
#include <android/log.h>
#include <cstdlib>


void ram_control::fillRam(int dsize) {
    p = static_cast<int *>(malloc(1024*1024*dsize));
    __android_log_print(ANDROID_LOG_DEBUG,"ram_control","fillMem");
    memset(p,0,1024*1024*dsize);
}

void ram_control::freeRam(){
    free(p);
    __android_log_print(ANDROID_LOG_DEBUG,"ram_control","freeMem");
    p = NULL;
}
