#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	printf("Chuong trinh tinh hoc luc cua hoc sinh ");
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
	return 0;
}
