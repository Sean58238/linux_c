/* 字节对齐
   字节对齐可以提高访问效率，以空间换性能
   32位编译器，默认对齐方式是4byte
   4字节对齐是由编译器保证
*/
#include <stdio.h>

struct mystruct{
    int a;
    char b;
    short c;
};

int main(int argc, char * argv[]){
    printf("size of struct mystruct = %d byte\n", sizeof(struct mystruct));
}