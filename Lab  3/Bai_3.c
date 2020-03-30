#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
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
	return 0;
}
