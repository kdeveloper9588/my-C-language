// 함수 포인터

#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int (*pfunc)(int, int); // 함수 포인터 선언
    pfunc = add;
    printf("결과값: %d\n", pfunc(10, 20)); // 똑같은 매개 변수와 반환값이 같을 때 유용함
    pfunc = sub;
    printf("결과값: %d\n", pfunc(10, 20));

    return 0;
}
