#include "stdio.h"
#include "math.h" 
#include "conio.h"
int main()
{
    printf(" I'm Zuy Rich Handsome!\n Toi se tinh chu vi va dien tich cua tam giac bat ki");
    Nhapcanh:
	float a,b,c;
	printf("\n Nhap canh a cua tam giac:");
    scanf("%f",&a);
    printf(" Nhap canh b cua tam giac:");
    scanf("%f",&b);
    printf(" Nhap canh c cua tam giac:");
    scanf("%f",&c);
    float v=a+b+c;
    float p=v/2;
    float s=sqrt((float)p*(p-a)*(p-b)*(p-c));
    printf(" Chu vi tam giac = %1.3f",v);
    printf("\n Dien tich tam giac = %1.3f",s);
    goto Nhapcanh;
    getch();
}
