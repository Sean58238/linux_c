/*
*  register key word only apply for variable and only for int and string storage type.
*  This key word use for the variable use of CPU for long time.
*/

#include <stdio.h>

int main(){
    register int i,sum=0;
    for(i=0;i<10;i++){
        sum=sum+i;
        printf("%d\n",sum);
        return 0;
    }
}