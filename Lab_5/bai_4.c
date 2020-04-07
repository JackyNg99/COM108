#include <stdio.h>
#include <stdlib.h>

void Timgiatrilonnhat();
void Tinhnamnhuan();
void HamHoanvi();

int main(int argc, char const *argv[])
{
    int chucnang;
    menu:
    printf("\n1 Xay dung chuong trinh tim gia tri lon nhat trong 3 so");
    printf("\n2                Chuong trinh tinh nam nhuan           ");
    printf("\n3            Chuong trinh xay dung ham hoan vi         ");
    printf("\n4                  Thoat khoi chuong trinh            \n");
    scanf("%d", &chucnang);
    switch (chucnang)
    {
    case 1:{
        system("cls");
        Timgiatrilonnhat();
        goto menu;
    }

    case 2:{
        system("cls");
        Tinhnamnhuan();
        goto menu;
    }

    case 3:{
        system("cls");
        HamHoanvi();
        goto menu;
    }

    case 4:{
        system("cls");
        printf("Cam on ban da su dung \nHen gap lai");
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

void Timgiatrilonnhat(){
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
}

void Tinhnamnhuan() {
    printf("Chuong trinh tinh nam nhuan \n");
    int years;
    printf("Nhap nam ban muon kiem tra: ");
    scanf("%d", &years);
    if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
    {
        printf("Day la nam nhuan");
    }
    else
    {
        printf("Day khong phai la nam nhuan");
    }
}

void HamHoanvi() {
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
}