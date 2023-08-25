#include<iostream>
#include "stdio.h"
#include "math.h"
using namespace std;
int main()
{
	printf(" Tinh chu vi va dien tich cua tam giac");
	Nhapcanh:
	printf("\n Nhap 3 canh tam giac sao cho:\n a+b>c, b+c>a, a+c>b, a>0, b>0, c>0");
	float a,b,c;
	Nhapcanha:printf("\n Nhap canh a cua tam giac: ");
	scanf("%f",&a);
	if(a>0){
		goto Nhapcanhb;
	}else{
		printf(" Sai! Nhap lai canh a");
		goto Nhapcanha;
	}
	Nhapcanhb:printf("\n Nhap canh b cua tam giac: ");
	scanf("%f",&b);
	if(b>0){
		goto Nhapcanhc;
	}else{
		printf(" Sai! Nhap lai canh b");
		goto Nhapcanhb;
	}
	Nhapcanhc:printf("\n Nhap canh c cua tam giac: ");
	scanf("%f",&c);
	if(c>0){
		goto Dieukien1;
	}else{
		printf(" Sai! Nhap lai canh c");
		goto Nhapcanhc;
	}
    Dieukien1:if(a+b>c){
    	goto Dieukien2;
	}else{
		printf(" Loi! Day khong phai la tam giac, hay nhap lai.");
		goto Nhapcanha;
	}Dieukien2:if(a+c>b){
		goto Dieukien3;
	}else{
		printf(" Loi! Day khong phai la tam giac, hay nhap lai.");
		goto Nhapcanha;
	}Dieukien3:if(b+c>a){
		goto CvaS;
	}else{
		printf(" Loi! Day khong phai la tam giac, hay nhap lai.");
		goto Nhapcanha;
	}
	CvaS:float d=a+b+c;
	float p=d/2;
	float e=sqrt(p*(p-a)*(p-b)*(p-c));
	printf(" Chu vi cua tam giac = %1.2f",d);
	printf("\n Dien tich cua tam giac = %1.2f",e);
	goto Nhapcanha;
}
