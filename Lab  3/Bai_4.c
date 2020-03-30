#include <stdio.h>
#include <math.h>
#include <conio.h>


int main() {
	int chuongtrinh;
	chaylai:
	printf("***...***...***...***...***...***...***...***...*** \n");
	printf("***...***...***...***...***...***...***...***...*** \n");
	printf("***      Hay chon chuong trinh ban can chay     *** \n");
	printf("***  1. Chuong trinh tinh hoc luc cua hoc sinh  *** \n");
	printf("***  2.       Giai phuong trinh bac 1           *** \n");
	printf("***  3.       Giai phuong trinh bac 2           *** \n");
	printf("***  4. Chuong trinh tinh tien dien tieu thu    *** \n");
	printf("***  5. Cam on da dung phan mem cua chung toi   *** \n");
	printf("***...***...***...***...***...***...***...***...*** \n");
	printf("***...***...***...***...***...***...***...***...*** \n");
	scanf("%d", &chuongtrinh);

	switch(chuongtrinh)
	{
		case 1: {
			system("cls");
			printf("\nChuong trinh tinh hoc luc cua hoc sinh \n");
			float x;
			printf("Moi nhap diem cua hoc sinh tai day: ");
			scanf("%f", &x);
			// Set up chuong trinh xep hoc luc;
			if (x >= 0 && x <=10)
			if (x >= 9)
				printf("Hoc luc xuat sac");
			else if (x >= 8)
				printf("Hoc luc gioi");
			else if (x >= 6.5)
				printf("Hoc luc kha");
			else if (x >= 5)
				printf("Hoc luc trung binh");
			else if (x >= 3.5)
				printf("Hoc luc yeu");
			else if (x <3.5)
				printf("Hoc luc kem");
			goto chaylai;
		}
		
		case 2: {
			system("cls");
			printf("Giai phuong trinh bac 1 \n");
			int a, b;
			printf("Nhap hai he so a, b: ");
			scanf("%d%d", &a, &b);

			if (a == 0)
			{
				/* code */
				if (b == 0)
				{
					/* code */
					printf("Phuong trinh co vo so nghiem\n");
				}
				else {
					printf("Phuong trinh vo nghiem\n");
				}
			}
			else {
				printf("Phuong trinh co nghiem duy nhat x= %d\n", -b/a);
			}
			goto chaylai;
		}

		case 3: {
			system("cls");
			printf("Giai phuong trinh bac 2 \n");
			int a, b, c;
			printf("Nhap he so a: ");
			scanf("%d", &a);
			printf("Nhap he so b: ");
			scanf("%d", &b);
			printf("Nhap he so c: ");
			scanf("%d", &c);
			if (a == 0)
			{
				/* code */
				if (b == 0)
				{
					/* code */
					if (c == 0)
					{
						/* code */
						printf("Phuong trinh co vo so nghiem \n");
					}
					else{
						printf("Phuong trinh vo nghiem\n");
					}
				}
				else {
					printf("Phuong trinh co 1 nghiem duy nhat x= %d\n", -c/b);
				}
			}
			else {
				float delta = b*b - 4*a*c;
				if (delta < 0)
				{
					/* code */
					printf("Phuong trinh vo nghiem\n");
				}
				else if (delta == 0)
				{
					/* code */
					printf("Phuong trinh co 1 nghiem duy nhat c= %f\n", -b/a*2);

				}
				else {
					printf("Phuong trinh co hai nghiem rieng biet x1 = %.2f\n", (-b + sqrt(delta)) / a*2);
					printf("Phuong trinh co hai nghiem rieng biet x2 = %.2f\n", (-b - sqrt(delta)) / a*2);
				}
			}	
			goto chaylai;
		}

		case 4: {
			system("cls");
			printf("Chuong trinh tinh tien dien tieu thu \n");
			float sokWh;
			printf("Nhap so dien da tieu thu: ");
			scanf("%f", &sokWh);
			if (sokWh >= 401)
			{
				/* code */
				printf("Tong tien dien cua ban la: %.3f\n", sokWh * 2927);
			}
			else if (sokWh >= 301)
			{
				/* code */
				printf("Tong tien dien cua ban la: %.3f\n", sokWh * 2834);
			}
			else if (sokWh >= 201)
			{
				/* code */
				printf("Tong tien dien cua ban la: %.3f\n", sokWh * 2536);
			}
			else if (sokWh >= 101)
			{
				/* code */
				printf("Tong tien dien cua ban la: %.3f\n", sokWh * 2014);
			}
			else if (sokWh >= 51)
			{
				/* code */
				printf("Tong tien dien cua ban la: %.3f\n", sokWh * 1734);
			}
			else if (sokWh >= 0) {
				printf("Tong tien dien cua ban la: %.3f\n", sokWh * 1678);
			}
			goto chaylai;
		}

		case 5: {
			system("cls");
			printf("Cam on da dung phan mem cua chung toi\n");
			break;
		}

		default: {
			system("cls");
			printf("Ban chua chon dung chuong trinh. Moi nhap lai\n");
			goto chaylai;
		}
	}
	return 0;
}
