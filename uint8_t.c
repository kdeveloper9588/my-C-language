#include <stdio.h>
#include <stdint.h>

typedef union
{
    uint8_t byte;
    struct
    {
        uint8_t b0 : 1;
        uint8_t b1 : 1;
        uint8_t b2 : 1;
        uint8_t b3 : 1;
        uint8_t b4 : 1;
        uint8_t b5 : 1;
        uint8_t b6 : 1;
        uint8_t b7 : 1;
    } bf;

} Data;

int main()
{
    Data d1;
    d1.byte = 0xf0;
    d1.bf.b0 = 1;
    printf("data = 0x%x\n", d1.byte);
}
