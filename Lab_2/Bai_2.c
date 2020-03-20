#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	// code here //
	int x, y;
	int P, S;
	printf("Nhap chieu dai hcn x: ");
	scanf("%d", &x);
	printf("Nhap chieu rong hcn y: ");
	scanf("%d", &y);
	P = (x + y) * 2;
	printf("Chu vi hcn: %d\n", P);
	S = x * y;
	printf("Dien tich hcn: %d", S);
	return 0;
}
