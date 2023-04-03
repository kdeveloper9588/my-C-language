#include <stdio.h>
int main()
{
    // int num1 = 15;
    // int num2 = 20;
    // int num3 = num1 & num2;
    // printf("%d\n", num3);

    int num1 = 15;
    int result1 = num1 << 1; // 값이 30
    int result2 = num1 << 2; // 60
    int result3 = num1 << 3; // 120, 값들이 2배씩 증가하고 있음 >> 사용하면 반대로 절반씩 줄어듬
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);

    return 0;
}