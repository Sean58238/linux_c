#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[]){
    int input;
    int n;
    int *numbers1;
    int *numbers2;
    numbers1 = NULL;

    if((numbers2 = (int *)malloc(5*sizeof(int)) ) == NULL){    //指针申请5个int空间，地址赋值给numbers2
        printf("malloc memroy unsuccessful");
        //free(numbers2);
        numbers2 = NULL;
        exit(1);
    }

    for (n=0; n<5; n++){    //新申请的空间初始化
        *(numbers2 + n) = n;                                  
        printf("numbers2's data: %d\n", *(numbers2 + n));
    }

    printf("Enter an integer value you want to remalloc ( enter 0 to stop)\n");   //输入新申请的空间大小

    scanf("%d", &input);

    numbers1 = (int *)realloc(numbers2, (input + 5)*sizeof(int));    //重新申请的空间大小为原有空间大小加上用户输入空间大小，首地址赋值给numbers1，如果申请失败返回NULL
    if(numbers1 == NULL){                                            //numbers2任然有效，如果申请成功，将重新分配一块大小合适的空间，新空间首地址赋值给numbers1
       printf("Error (re)allocating memroy");                        //numbers2所指向的5个空间数据复制到新的内存空间，释放掉原来numbers2所指向的空间
       exit(1);
    }

    for(n=0;n<5;n++){            //5个数从numbers2拷贝过来的
        printf("the numbersls's data copy from number2:%d\n", *(numbers1 + n));
    }


    for(n=0;n<input;n++){        //新数据初始化
        *(numbers1 + 5 + n) = n*2;
        printf("nummber1's new data: %d\n", *(numbers1 + 5 +n));
    }

    printf("\n");
    free(numbers1);            //释放numbers1
    numbers1=NULL;
        //free(numbers2);      //不能再释放numbers2
    return 0;
}