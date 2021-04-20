/*
   子进程从创建后和父进程同时执行，竞争系统资源
   子进程的位置是fork的返回位置
   因为其他代码也在子进程的代码段中，因此fork之后的代码在子进程中也会执行
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
    pid_t pid;
    if((pid=fork()) == -1){
        printf("fork error");
    }
    printf("bye!,pid=%d\n", getpid());    //printf执行了2次,分别为父子进程(pid不同)
    return 0;
}