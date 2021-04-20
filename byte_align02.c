#include <stdio.h>

//定义一个区间，对齐参数为n
#pragma pack(2)
struct mystruct1{
    int a;
    char b;
    short c;
};
#pragma pack()

int main(int argc, char *argv[]){
    printf("size of struct mystruct1 = %d byte\n", sizeof(struct mystruct1));

}