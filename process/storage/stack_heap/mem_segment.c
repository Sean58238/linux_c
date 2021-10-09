#include <stdio.h>
#include <stdlib.h>

int a = 0;   //initalized data segment(data segment)
char *p0;    //BSS(Block Started by Symbol)

int main(void)
{
    int b;                //b in stack
    char s[] = "abc";     //s in stack,  "abc" in initalized data segment
    char *p1, *p2;        //p1,p2 in stack
    char *p3 = "123456";  //p3 in stack, "123456" in initalized data segment
    static int c = 0;     //c in initalized datasegment

    p1 = (char *)malloc(10);  //10 byte in heap
    p2 = (char *)malloc(20);  //20 byte in heap
    free(p1);
    free(p2);
    p1 = NULL;
    p2 = NULL;

    return 0;
}
