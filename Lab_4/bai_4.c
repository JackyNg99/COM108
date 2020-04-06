#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int chucnang;
    menu:
    printf("\n1 Tinh trung binh tong cua cac so tu nhien chia het cho 2 ");
    printf("\n2           Chuong trinh xac dinh so nguyen to            ");
    printf("\n3         Chuong trinh xac dinh so chinh phuong           ");
    printf("\n4                   Thoat khoi chuong trinh               \n");
    scanf("%d", &chucnang);
    switch (chucnang)
    {
        case 1: {
            system("cls");
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
            goto menu;
        }

        case 2: {
            system("cls");
            printf("Chuong trinh xac dinh so nguyen to \n");
            int n;
            printf("Nhap mot so bat ki: ");
            scanf("%d", &n);
            // cách 1
            // kiểm tra số nguyên tố
            bool snt = true;
            int i = 0;
            for (i = 2; i < n; i++)
            {
                /* code */
                if (n % i == 0)
                {
                    /* code */
                    snt = false;
                    break;
                }
            }
            if (snt == true)
            {
                /* code */
                printf("Day la so nguyen to \n");
            }
            else
            {
                printf("Day khong phai la so nguyen to \n");
            }
            goto menu;
        }

        case 3: {
            system("cls");
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
            goto menu;
        }

        case 4: {
            system("cls");
            printf("Xin cam on \nHen gap lai");
            break;
        }

        default:
        {
            system("cls");
            printf("Ban chua chon dung chuong trinh. Moi nhap lai\n");
            goto menu;
        }
    }
    return 0;
}
