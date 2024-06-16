#include <stdio.h>
#include <stdlib.h>

typedef struct Person{
    char name[16];
    int HP;
    int ATK;
}Person;

void Fight(Person *a, Person *b){
    printf("my name is %s\r\n", a->name);
    printf("my name is %s\r\n", b->name);
    a->HP -= b->ATK;
    b->HP -= a->ATK;
    
}

int main()
{
    Person sunwukong = {"sunwukong", 1000, 100};
    Person baigujing = {"baigujing", 200, 10};
    Fight(&sunwukong,&baigujing);
    printf("sunwukong HP: %d, baigujing:%d\r\n",sunwukong.HP, baigujing.HP);
    return 0;
}