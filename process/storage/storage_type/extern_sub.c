#include <stdio.h>

//global variable in subfunction
int i=0;  

void test(void){
    printf("in subfunction i=%d\n", i);
}