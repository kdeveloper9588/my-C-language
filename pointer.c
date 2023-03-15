#include<stdio.h>

int main()
{
    // int *ptr1;
    // int **ptr2;
    // int num = 10;
    // ptr1 = &num;
    // ptr2 = &ptr1;
    // printf("%d\n",**ptr2);

    // int *ptr;
    // int num = 20;
    // ptr = &num;
    // printf("%p\n",ptr);
    // printf("%p\n",&num);

    int arr[3] = {0,1,2};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);

    int *ptr;
    ptr = &arr[0]; // ==arr과 같음
    *ptr = 10; //arr[10] 과 ptr[0] 와 같음 아래도 마찬가지
    *(ptr+1) = 30;
    *(ptr+2) = 300;

    printf("%d\n", *ptr);
    printf("%d\n", *(ptr+1));
    printf("%d\n", *(ptr+2));

    return 0;
}