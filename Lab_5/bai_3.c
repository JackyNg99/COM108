#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("Chuong trinh xay dung ham hoan vi \n");
    int a, b;
    printf("Nhap gia tri cua a: ");
    scanf("%d", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("Sau khi hoan vi:\na = %d\nb = %d\n", a, b);
    return 0;
}