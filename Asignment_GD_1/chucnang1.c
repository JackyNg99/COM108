#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
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
	return 0;
}
