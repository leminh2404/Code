#include "stdio.h"
#include "math.h"
int main()
{
	printf(" Tinh diem thi");
	float a,b,c;
	int d;
	float e=a+b+c;
	printf("Nhap diem Toan: ");
	scanf("%f",&a);
	printf("\nNhap diem mon Ly: ");
	scanf("%f",&b);
	printf("\nNhap diem mon Anh: ");
	scanf("%f",c);
	printf("\nNhap khu vuc cua ban: ");
	scanf("%d",&d);
	switch(d){
		case 1: printf("Tong diem la: %0.2f",e+1);
		        break;
		case 2: printf("Tong diem la: %0.2f",e+0.5);
		        break;
		case 3: printf("Tong diem la: %0.2f",e);
		        break;
		default: printf(" Nhap lai khu vuc: ");
		         scanf("&d",&d);
             }
	
	
	
}
