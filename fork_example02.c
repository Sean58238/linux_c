/*
    父进程 -> 子进程PID
    子进程 -> 0
    执行失败 -> -1 , 错误存储在errno中
    
    fork成功后，子进程会复制父进程中的代码段，数据段，BSS，堆，栈，打开的描述符
    从父进程继承： 实际用户/组号，有效用户/组号，保留的用户/组号，进程组号，环境变量，对文件执行时的关闭标志
    信号处理方式设置，信号掩码，当前工作目录，根目录，文件模式创建掩码，文件大小限制
*/


#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
    pid_t pid;
    printf("parent pid=%d\n",getpid());
    if((pid=fork()) == -1){
        printf("fork error");
    }else if(pid == 0){

        printf("in the child process, pid=%d\n", getpid());

    }else{
        printf("in the parent process, pid=%d\n", getpid());
    }
    return 0;
}