#include <stdio.h>
#include "math.h"
using namespace std;
int main()
{
	printf(" Giai phuong trinh bac 2: ax^2+bx+c=0");
	float a, b, c;
Nhapso:
	printf("\n Nhap so a cua phuong trinh: ");
	scanf("%f", &a);
	if (a != 0)
		goto Nhapso2;
	else
		printf(" Loi! a phai khac 0, hay nhap lai");
	goto Nhapso;
Nhapso2:
	printf(" Nhap so b cua phuong trinh: ");
	scanf("%f", &b);
	printf(" Nhap so c cua phuong trinh: ");
	scanf("%f", &c);
Tinhnghiem:
	float d = pow(b, 2) - 4 * a * c;
	if (d < 0)
		printf(" Phuong trinh vo nghiem.");
	else if (d == 0)
		printf(" Phuong trinh co nghiem kep: %f", -(b / 2 * a));
	else
		printf(" Phuong trinh co 2 nghiem phan biet: %1.2f, %0.2f", ((-b + sqrt(d)) / 2 * a), ((-b - sqrt(d)) / 2 * a));
	goto Nhapso;
}
