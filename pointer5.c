#include <stdio.h>
#include <stdlib.h>

//void Show(int arrary[], int *p)
//void Show(int arrary[3], int *p)
void Show(int *arrary, int *p, int num){
    for(int i = 0; i < num; i++){
        printf("loop: %d array: %d p:%d\r\n", i , arrary[i], *(p+i));
        printf("loop: %d array: %d p:%d\r\n", i , *(arrary+i), p[i]);
    }
}

int main()
{
    int arrary[3] = {1,2,3};
    int *p = malloc(sizeof(int)*3);
    *p = 1;
    *(p+1) = 2;
    *(p+2) = 3;

    // 相同
    Show(arrary,p,3);

    // 不同
    // sizeof
    printf("sizeof arrary: %lu, p: %lu\n", sizeof(arrary), sizeof(p));

    // exrern
    // extern int *p;
    // extern int array[];

    // 指针和数组作为参数
    Show(arrary,p,3);

    // 数组指针和指针数组
    int *p1[3];  //指针数组 p1是数组，存放的是3个int型指针
    int (*p2)[3]; //数组指针 p2是指针，指向的是int[3]类型的地址

    printf("arrary address: %p,%p,%p\r\n",arrary,&arrary[0],&arrary);
    printf("arrary+1 address: %p,%p,%p\r\n",arrary+1,&arrary[0]+1,&arrary+1);
    // 数组指针也叫行指针
    p2 = &arrary;
    printf("p2:%p, p2+1:%p\r\n",p2,p2+1);

    return 0;
} 