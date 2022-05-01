//do not return the address of local variable
#include <stdio.h>

int * test(void){
    int i=10;
    return &i;   //return local variable address will casue memory error
}

int main(void){
    int *p;
    p=test();
    printf("*p=%d\n",*p);
    return 0;
}

