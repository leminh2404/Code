#include "stdio.h"
#include "math.h"
int main()
{
	printf(" Tinh luong cua cong nhan (Hay nhap so nguyen)");
	int n,a;
	Nhap:do{
		printf("\n Nhap n la so ngay lam viec cua cong nhan: ");
		scanf("%d",&n);
	}while(n<=0||n>=30);
	do{
		printf("\n Nhap a la so gio lam them cua cong nhan: ");
		scanf("%d",&a);
	}while(a<=0);
	printf("\n Luong cua cong nhan la: %d",n*400);
	if(a<=50){
		printf("\n Tien lam them cua cong nhan la: %d",a*200);
	    printf("\n Tong tien luong la: %d",n*400+a*200);
	}else{
		printf("\n Tien lam them cua cong nhan la: %d",a*250);
	    printf("\n Tong tien luong la: %d",n*400+a*250);	
	}goto Nhap;	
}
