#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("Tim uoc so chung va boi so chung cua 2 so \n");
    int a, b, USC, BSC;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    // tìm ước số chung lớn nhất
    for ( USC = a; USC >= 1; USC--)
    {
        /* code */
        if (a % USC == 0 && b % USC == 0)
        {
            /* code */
            printf("Uoc chung lon nhat cua 2 so: %d\n", USC);
            break;
        }
    }
    // tìm bội số chung nhỏ nhất
    for ( BSC = a; BSC <= a * b; BSC++)
    {
        /* code */
        if (BSC % a == 0 && BSC % b == 0)
        {
            /* code */
            printf("Boi chung nho nhat cua 2 so: %d\n", BSC);
            break;
        }
    }
    return 0;
}
