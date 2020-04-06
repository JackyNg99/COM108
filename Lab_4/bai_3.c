#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    printf("Chuong trinh xac dinh so chinh phuong \n");
    int n, count = 0, i;
    printf("Nhap gia tri bat ki tai day: ");
    scanf("%d", &n);
    while (i * i <= n)
    {
        /* code */
        if (i * i == n)
        {
            /* code */
            printf("Day la so chinh phuong \n");
            return 0;
        }
        ++i;
    }
    printf("Day khong phai la so chinh phuong");
    return 0;
}
