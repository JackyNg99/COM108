
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int chucnang;
	menu:
	printf("\n  1.                Chuong trinh kiem tra so nguyen               ");
	printf("\n  2.             Chuong trinh tim USC va BSC cua 2 so             ");
	printf("\n  3.            Chuong trinh tinh tien cho quan Karaoke           ");
	printf("\n  4.             Chuong trinh tinh tien dien tieu thu             ");
	printf("\n  5.                     Chuong trinh doi tien                    ");
	printf("\n  6.  Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop  ");
	printf("\n  7.           Xay dung chuong trinh vay tien mua xe              ");
	printf("\n  8.  		Chuong trinh sap xep thong tin sinh vien 			");
	printf("\n  9.  			Xay dung game FPOLY-LOTT (2/15) 				");
	printf("\n 10. 		    Xay dung chuong trinh tinh toan phan so             ");
	printf("\n                Moi ban nhap chuc nang can ho tro                 ");
    printf("\n      Cam on ban da tin tuong va su dung phan mem cua chung toi \n");
	scanf("%d", &chucnang);

	switch(chucnang)
	{
		case 1: {
            system("cls");
			printf("Chuong trinh kiem tra so nguyen \n");
            int x;
            printf("Nhap mot so bat ki: ");
            scanf("%d", &x);
            // kiểm tra số nguyên
            if (x == (int)x )
            {
                /* code */
                printf("Day la so nguyen \n" );
                // kiểm tra số nguyên tố
                bool snt = true;
                int i = 0;
                for ( i = 2; i < x; i++)
                {
                    /* code */
                    if (x % i == 0)
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
                } else {
                    printf("Day khong phai la so nguyen to \n");
                }
                // kiểm tra số chính phương
                while (i * i <= x)
                {
                    /* code */
                    if (i * i == x)
                    {
                        /* code */
                        printf("Day la so chinh phuong \n");
                        return 0;
                    }
                    ++i;
                }
                printf("Day khong phai la so chinh phuong");
                
            }
			goto menu;
		}

        case 2: {
            system("cls");
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
            goto menu;
        }

        case 3: {
            system("cls");
            printf("Chuong trinh dang trong qua trinh xay dung !");
            goto menu;
        }

        case 4: {
            system("cls");
            printf("Chuong trinh tinh tien dien tieu thu");
            float sokWh;
            printf("Nhap so dien da tieu thu: ");
            scanf("%f", &sokWh);
            if (sokWh >= 401)
            {
                /* code */
                printf("Tong tien dien cua ban la: %f\n", sokWh * 2927);
            }
            else if (sokWh >= 301)
            {
                /* code */
                printf("Tong tien dien cua ban la: %f\n", sokWh * 2834);
            }
            else if (sokWh >= 201)
            {
                /* code */
                printf("Tong tien dien cua ban la: %f\n", sokWh * 2536);
            }
            else if (sokWh >= 101)
            {
                /* code */
                printf("Tong tien dien cua ban la: %f\n", sokWh * 2014);
            }
            else if (sokWh >= 51)
            {
                /* code */
                printf("Tong tien dien cua ban la: %f\n", sokWh * 1734);
            }
            else if (sokWh >= 0) {
                printf("Tong tien dien cua ban la: %f\n", sokWh * 1678);
	        }
            goto menu;
        }

        case 5: {
            system("cls");
            printf("Chuong trinh dang trong qua trinh xay dung !");
            goto menu;
        }

        case 6: {
            system("cls");
            printf("Chuong trinh dang trong qua trinh xay dung !");
            goto menu;
        }

        case 7: {
            system("cls");
            printf("Chuong trinh dang trong qua trinh xay dung !");
            goto menu;
        }

        case 8: {
            system("cls");
            printf("Chuong trinh dang trong qua trinh xay dung !");
            goto menu;
        }

        case 9: {
            system("cls");
            printf("Chuong trinh dang trong qua trinh xay dung !");
           goto menu;
        }

        case 10: {
            system("cls");
            printf("Chuong trinh dang trong qua trinh xay dung !");
           goto menu;
        }

        case 0: {
            system("cls");
            printf("Cam on ban da tin tuong va su dung phan mem cua chung toi");
            break;
        }

        default: {
			system("cls");
			printf("Ban chua chon dung chuong trinh. Moi nhap lai\n");
			goto menu;
		}
	}

	return 0;
}
