#include<iostream>
#include "stdio.h"
#include "math.h"
int main()
{
	printf(" Kiem tra tam giac");
	Nhapcanh:
	float a,b,c;
	printf("\n Nhap canh a cua tam giac: ");
	scanf("%f",&a);
	printf(" Nhap canh b cua tam giac: ");
	scanf("%f",&b);
	printf(" Nhap canh c cua tam giac: ");
	scanf("%f",&c);
	if (pow(a,2)+pow(b,2)==pow(c,2))
	printf(" Day la tam giac vuong.");
	else if (pow(a,2)+pow(c,2)==pow(b,2))
	printf(" Day la tam giac vuong.");
	else if (pow(b,2)+pow(c,2)==pow(a,2))
	printf(" Day la tam giac vuong.");
	else{
		if (a==b,b==c,c==a) printf(" Day la tam giac deu.");
		else if (a==b!=c) printf(" Day la tam giac can.");
		else if (a!=b==c) printf(" Day la tam giac can.");
		else printf(" Day la tam giac can.");
		goto Nhapcanh;
	}
	
	
	
}
