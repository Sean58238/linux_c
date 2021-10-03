/*
*   static storage type:
*   static key word not only use for variable but also use for function
*   static variable store in data segment.(static variable and initialized global variable store in data segment)
*   life cycle: whole program
*   scope:  local variable ->  {}
            global variable -> current file
    initialize: if not initialized it will be automatically initialized to 0, and static variable can only initialized once.
                if this function not need to called in other files, it's nessessary to declare it as a static type, it can avoids conflicting funciton names.
*/

#include <stdio.h>

int sum(int a)
{
    auto int c = 0;     //auto variable, it is initialized every time this function is called
    static int b = 5;   //static local variable, only initialized once
    c++;
    b++;
    printf("c = %d\t,b = %d\t", c , b);
    return(a + b + c);
}

int main(void)
{
    int i;
    int a = 2;
    for( i= 0; i < 5; i++)
    {
        printf("time %d sum(a) = %d\n", i, sum(a));
    }
    return 0;
}
