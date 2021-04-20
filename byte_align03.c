#include <stdio.h>

struct mystruct1{
    int a;
    char b;
    short c;
}__attribute__((packed));

struct mystruct2{
    int a;
    char b;
    short c;
    short d;
}__attribute__((aligend(4)));

struct mystruct2{
    int a;
    char b;
    short c;
    short d;
}__attribute__((aligend(1024)));

int main(int argc, char* argv[]){
    printf("size of struct mystruct1 = %d byte\n", sizeof(struct mystruct1));
    printf("size of struct mystruct2 = %d byte\n", sizeof(struct mystruct2));
}