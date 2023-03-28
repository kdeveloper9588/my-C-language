#include <stdio.h>

union unTemp
{
    char a;
    int b;
    double c;
} un;

int main(void)
{
    printf("문자형 a의 주소와 크기 : %p, %ld\n", &un.a, sizeof(un.a));
    printf("정수형 b의 주소와 크기 : %p, %ld\n", &un.a, sizeof(un.b));
    printf("실수형 c의 주소와 크기 : %p, %ld\n", &un.a, sizeof(un.c));

    un.a = 'A';
    printf("문자형 a의 값 : %c\n", un.a);
    un.b = 100;
    printf("정수형 b의 값 : %d\n", un.b);
    un.c = 3.14;
    printf("실수형 c의 값 : %.2f\n", un.c);
    return 0;
}