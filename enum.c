// 열거형
// 파이썬의 딕셔너리 처럼 키 밸류가 존재함 키로 밸류에 접근가능
//,로 구분함
// 값을 정해주지 않으면 초기값에서 1씪 증가 초기값을 정하지 않으면 0으로 시작

#include <stdio.h>

typedef enum
{
    SUN = 0,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
} week;

int main(void)
{
    week ju;
    ju = TUE;
    printf("%d\n", ju);

    return 0;
}