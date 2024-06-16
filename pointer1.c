#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int *p;
    p = &a;
    printf("value of p: %p\r\n",p);
    // p = malloc(sizeof(int));
    // printf("value of p: %p\r\n",p);
    // p = 0;
    // printf("value of p: %p\r\n",p);
    // p = 0x12345678;
    // printf("value of p: %p\r\n",p);
    printf("*p : %d\r\n", *p);
    *p = 2;
    printf("*p : %d, a:%d\r\n", *p,a);

    char  *p1,p2;
    printf("sizeof p1:%lu, sizeof p2:%lu\r\n",sizeof(p1),sizeof(p2));
    return 0;
}