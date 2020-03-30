#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	float a, b, c;
	printf("Nhap diem ba mon Toan, Ly, Hoa: \n");
	scanf("%f%f%f", &a, &b, &c);
	float diemtb;
	diemtb = ( a*3 + b*2 * c ) / 6;
	printf("Diem trung binh ba mon: %.2f", diemtb);
	return 0;
}
