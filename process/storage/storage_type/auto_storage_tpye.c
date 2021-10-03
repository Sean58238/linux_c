/*
* auto only use for identify the storage type of variable 
*/
#include <stdio.h>
int main(void){
    auto int i=1;    //the storage type of local variable i is "auto" 
    int j=2;         //storage type default specified to "auto"
    printf("i=%d\tj=%d\n",i,j);
    return 0;
}