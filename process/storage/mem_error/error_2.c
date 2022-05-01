#include <stdio.h>

int * test(void){
    int a[60] [250] [1000],i,j,k;  //variable a large than 60MB, will cause stack overflow
    for(k=0; k<1000; k++){
        for(j=0; j<250; j++){
            for(i=0; i<60; i++){
                a[i] [j] [k] = 0; 
            }
        }
    }
}

int main(void){
    int *p;
    p=test();
    printf("*p=%d\n",*p);
    return 0;
}