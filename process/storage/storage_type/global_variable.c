/*
*   do not recommend put the global variable in header file
*   if many c file to inclues this header file, maybe trigger the duplicate definition
*/

#include <stdio.h>
#include "global_variable.h"  //includes customize header file

int main(void){
    //global variable "i" define in header file
    printf("global variable i=%d\n" , i);
    return 0;
}