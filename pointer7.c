#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arrary[] = "hello";
    char *p = "hello";

    printf("arrary:%s, p:%s\n", arrary,p);
    arrary[0] = 'H';
    //*p = 'H'; //指针p指向的是"hello"常量，不可以修改
    printf("arrary:%s, p:%s\n", arrary,p);
    printf("sizeof arrary:%lu\n", sizeof(arrary));

    char *p1 = malloc(strlen("hello")+1);
    strcpy(p1, "hello");
    printf("arrary:%s, p1:%s\n", arrary,p1);
    *p1 = 'H';
    printf("arrary:%s, p1:%s\n", arrary,p1);

    return 0;
}