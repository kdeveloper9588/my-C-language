// 구조체 다양한 타입의 변수 집합
//  구조체를 구성하는 변수를 멤버 변수라고 함
#include <stdio.h>
struct score
{
    char name[20];
    int mic, lin, pro;
};

int main()
{
    struct score s[2]; // struct score s = {60, 70, 60} 으로 초기화도 가능
    for (int i = 0; i < 2; i++)
    {
        scanf("%s\n", s[i].name);
        scanf("%d\n", &s[i].mic);
        scanf("%d\n", &s[i].lin);
        scanf("%d\n", &s[i].pro);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%s 점수 출력:  %5d%5d%5d\n", s[i].name, s[i].mic, s[i].lin, s[i].pro);
    }
    return 0;
}
