#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	// PT bac 1
	printf("Giai phuong trinh bac 1");
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
	return 0;
}

