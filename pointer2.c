// 배열 포인터
#include <stdio.h>

int main()
{
    char *data[] = {"가나다", "ABC", "포인터"};
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", data[i]); //%s의 의미: 재시된 주소부터 null(\0) 앞에까지 출력 고로 가나다, abc등이 나옴
    }
    char *arr[3];
    int i;
    arr[0] = "black";
    arr[1] = "white";
    arr[2] = "blue";

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i]);
    }

    // 포인터에다가 배열의 첫번째 주소를 넣으면 *(a+0) == *(p+0) == a[0] == p[0] 성립한다
    // int *p = 배열 일때

    int a[3] = {10, 20, 30};
    printf("%ld %ld %ld %ld\n", sizeof(a), sizeof(a + 0), sizeof(&a[0]), sizeof(int)); // sizeof(a) = 배열 전체라 12가 나옴

    // int a[3];
    // int *p;
    // p = a;
    // printf("%d %d %d\n", a[0], a[1], a[2]);//쓰레기 값
    // *p++ = 10; // *p = 10; p = p+1;
    // printf("%d %d %d\n", a[0], a[1], a[2]);//10 위의 *p++에서 a[0]에 10을 넣고 다음 번지로
    // *p++ = 20; // *p = 20; p = p+1;
    // printf("%d %d %d\n", a[0], a[1], a[2]);//20 a[1] 에 20을 넣고 다음 번지로
    // *p = 30; // *p = 30; p = p+1;
    // printf("%d %d %d\n", a[0], a[1], a[2]);//30 a[2] 에다가 30을 넣기

    // int b[3][2];
    // int (*p)[2]; // 8byte 씩 2두칸
    // p = b;//a == p, a+1 == p+1, a+2 == p+2, a[0][0] == p[0][0] 등등 성립

    // char i[4][3];   //char *i[3]
    // int o[100][5];  //int *o[5]
    // int h[10000][5];    // int *h[5] 둘다 자료형과 열의 크기가 같음

    //*(a[0]+0) == a[0][0];
    // a[0][0] == (*(a+0))[0] == *(a[0]+0)) == (*(a+0)+0))

    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int(*p)[4] = arr1;
    printf("%p\n", *p);            // p가 가리키는 값(주소) 0x7ff.....
    printf("%p\n", *arr1);         // a가 가리키는 값(주소)0x7ff....
    printf("%d\n", p[2][1]);       // 2,1의 값 10
    printf("%ld\n", sizeof(arr1)); // 전체 배열의 크기
    printf("%ld\n", sizeof(p));    // 포인터의 크기

    return 0;
}