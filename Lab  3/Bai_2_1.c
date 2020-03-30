#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// PT bac 2

int main(int argc, char const *argv[])
{
	printf("Giai phuong trinh bac 2", );
	int a, b, c;
	printf("Nhap he so a: \n");
	scanf("%d", &a);
	printf("Nhap he so b: \n");
	scanf("%d", &b);
	printf("Nhap he so c: \n");
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
	return 0;
}
