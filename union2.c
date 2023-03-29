#include <stdio.h>

typedef union
{
    unsigned int val;
    struct
    {
        unsigned char a;
        unsigned char b;
        unsigned char g;
        unsigned char r; // 불투명도(00~ff)
    };                   // rgba와 같이 이름 생략 가능!

} color;

int main()
{
    color sample;
    sample.val = 0xffffffff;
    sample.b = 0x00;
    printf("%x\n", sample.val);
    return 0;
}
