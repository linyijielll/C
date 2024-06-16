#include <stdio.h>
#include <stdlib.h>

int add(const int* a, const int* b){
    return *a + *b;
}

int main()
{
    int a = 1;
    int b = 2;
    // 常量指针
    int const *p1 = &a;
    const int *p2 = &a;
    // *p1 = 0; read-only variable is not assignable
    // *p2 = 0; read-only variable is not assignable
    p1 = &b;
    p2 = &b;
    // 指针常量
    int *const p3 = &a; 
    //p3 = &b; variable 'p3' declared const here
    *p3 = 3;
    return 0;
}