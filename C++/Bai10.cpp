#include "stdio.h"
#include "math.h"
int main()
{
	int n;
	do{
		printf(" Nhap so nguyen n (1<=n<=100): ");
		scanf("%d",&n);
	}while(n<1||n>100);
	int i=6;
	printf("\n Cac so lon hon 5 trong khoang 1 den n: ");
	while(i<=n){
		printf(" %d",i);
		i++;
	}int T=0,y=6;
	while(y<=n){
		T+=y;	
		y++;
	}printf("\n Tong cac so lon hon 5 trong khoang 1 den n= %d",T);
	int dem=0,z=6;
	float U=0;
	while(z<=n){
		if(z%2==0) U+=z;
		z++;
		dem++;
	}printf("\n TBC cac so chan lon hon 5 trong khoang 1 den n = %0.2f",U/dem);
}
