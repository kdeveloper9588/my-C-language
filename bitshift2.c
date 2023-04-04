#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("두 수와 연산자를 입력하세요: ");
    scanf("%d %d %c", &num1, &num2, &op);

    switch (op)
    {
    case '&':
        printf("%d & %d = %d\n", num1, num2, num1 & num2);
        break;
    case '|':
        printf("%d | %d = %d\n", num1, num2, num1 | num2);
        break;
    case '^':
        printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
        break;
    case '<':
        printf("%d << %d = %d\n", num1, num2, num1 << num2);
        break;
    case '>':
        printf("%d >> %d = %d\n", num1, num2, num1 >> num2);
        break;
    default:
        printf("잘못된 연산자입니다.\n");
        break;
    }

    return 0;
}