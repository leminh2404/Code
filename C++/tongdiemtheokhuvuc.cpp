#include "stdio.h"
#include "math.h"
int main()
{
	printf(" Tinh tong diem thi");
Nhapdiem:
	float a, b, c, d;
	printf(" \nNhap diem thi mon Toan: ");
	scanf("%f", &a);
	printf(" Nhap diem thi mon Ly: ");
	scanf("%f", &b);
	printf(" Nhap diem thi mon Anh: ");
	scanf("%f", &c);
	printf(" Ban thuoc khu vuc may?: ");
	scanf("%f", &d);
	do
	{
		printf("Sai! Nhap lai khu vuc: ");
		scanf("%f", &d);
	} while (d < 1 || d > 3);
	float e = a + b + c;
	if (d == 1)
	{
		printf("Tong diem thi la: %0.2f", e + 1);
	}
	else if (d == 2)
	{
		printf(" Tong diem thi la: %0.2f", e + 0.5);
	}
	else if (d == 3)
	{
		printf(" Tong diem thi la: %0.2f", e);
	}
}
