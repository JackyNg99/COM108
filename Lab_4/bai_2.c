#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
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
    return 0;
    
}