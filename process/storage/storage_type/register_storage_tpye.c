/*
*  register key word only apply for variable and only for int and string storage type.
*  This key word use for the variable use of CPU for long time.
*/

#include <stdio.h>

int main(){
    int i,sum=0;
    printf("%d\n",i);
    for(i=0; i<1000000000; i++){
        sum=sum+10000;
        printf("%d\n",sum);
        return 0;
    }
}