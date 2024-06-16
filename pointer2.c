#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 算数运算
    int * p = malloc(sizeof(int)*10);
    printf("%p %p %p\r\n",p, p+1, p-1);
    
    // 关系运算
    int a = 1;
    int b = 1;
    int *pa = &a;
    int *pb = &b;
    if (pa != pb){
        printf("not equal\n");
    }

    return 0;
}