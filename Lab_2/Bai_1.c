#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a, b, tong, hieu;
	printf("Nhap so a, b: \n");
	scanf("%d%d", &a, &b);
	tong = a + b;
	printf("Tong hai so la: %d\n", tong);
	hieu = a - b;
	printf("Hieu hai so la: %d", hieu);
	return 0;
}