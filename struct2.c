// 구조체 포인터

#include <stdio.h>

typedef struct person
{
    char name[20];
    int num;
    unsigned int age;

} Person;

void ShowData(Person *p)
{
    printf("Name : %s\n", p->name);
    printf("Number : %d\n", p->num);
    printf("Age : %d\n", p->age);
}

int main(void)
{
    Person p = {"이순신", 10, 24};
    Person *ptr = &p;
    ShowData(ptr);
    return 0;
}