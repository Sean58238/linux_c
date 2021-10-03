/*
*  The scope of global variable is all of files in current project
*  global variable only can init once.
*  gcc > v4.0:  if not init global variable, it will to assign variable to 0 in compile.
*/

#include <stdio.h>

int i;
int j;

int main(void){
    int k;
    j++;
    k = i + j;
    printf(" i + j =%d\n", k);
    return 0;
}