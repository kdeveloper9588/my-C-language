// 구조체와 패딩

#include <stdio.h>

typedef struct test1
{
    char ch;
    int num;
    short sh;
} Test1;

typedef struct test2
{
    char ch;
    short sh;
    int num;
} Test2;

int main()
{
    Test1 t1[2];
    Test2 t2[2];

    printf("%ld %ld\n", sizeof(t1), sizeof(t2)); // 메모리 크기 다름
}