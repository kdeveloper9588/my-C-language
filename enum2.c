#include <stdio.h>

typedef enum
{
    LINUX = 3,
    MICRO = 5,
    PROJECT = 8
} Code;

int main()
{
    Code emb;
    scanf("%d\n", &emb);
    switch (emb)
    {
    case 3:
        printf("LINUX\n");
        break;
    case 5:
        printf("MICRO\n");
        break;
    case 8:
        printf("PROJECT\n");
        break;
    }
    return 0;
}
