#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    printf("Tinh trung binh tong cua cac so tu nhien chia het cho 2 \n");
    int min, max;
    printf("Nhap gia tri cua min  : ");
    scanf("%d", &min);
    printf("Nhap gia tri cua max : ");
    scanf("%d", &max);
    int sum = 0, count = 0;
    int i = min;
    while (i <= max)
    {
        if (i % 2 == 0)
        {
            sum += i;
            count++;
        }
        i++;
    }
    float tbt = sum / count;
    printf("Gia tri trung binh tong cua cac so tu nhien chia het cho 2: %.2f", tbt);
}
