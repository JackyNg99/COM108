#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// double get_PI()
// {
// 	double pi;
// 	__asm
// 	{
// 		fldpi;
// 		fstp pi;
// 	}
// 	return pi;
// }

int main(int argc, char const *argv[])
{
	int r;
	// double PI = get_PI();
	const double pi = 4.0 * atan(1.0);
	printf("pi\n");
	float P, S;
	printf("Nhap ban kinh hinh tron r: ");
	scanf("%d", &r);
	P = 2 * r * pi;
	printf("Chu vi hinh tron: %.4f\n", P);
	// S = pi * pow(r,2);
	printf("Dien tich hinh tron: %.4f", pi * pow(r,2));
	return 0;
}


