#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("Chuong trinh tinh nam nhuan \n");
    int years;
    printf("Nhap nam ban muon kiem tra: ");
    scanf("%d", &years);
    if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
    {
        printf("Day la nam nhuan");
    } else
    {
        printf("Day khong phai la nam nhuan");
    }
    return 0;
}
