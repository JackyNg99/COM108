#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("Xay dung chuong trinh tim gia tri lon nhat trong 3 so \n");
    int a, b, c;
    int max = a;
    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri b: ");
    scanf("%d", &b);
    printf("Nhap gia tri c: ");
    scanf("%d", &c);
    if (b > max)
    {
        /* code */
        max = b;
    }
    if (max < c)
    {
        /* code */
        max = c;
    }
    printf("Gia tri lon nhat trong ba so la: %d", max);
    return 0;
}
