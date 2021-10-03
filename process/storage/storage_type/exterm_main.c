/*
*  extern: declarer a global variable in current file, but definite in another file in currnet project.        
*/

#include <stdio.h>

//declare global variable (definite in extern_sub.c)
extern i;

int main(void){
    printf("in main i = %d\n", i);
    test();
    return 0;
}