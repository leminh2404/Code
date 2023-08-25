#include "stdio.h"
#include "math.h"
int main()
{
	int n;
	do{
		printf(" Nhap so nguyen n (1<=n<=100): ");
		scanf("%d",&n);
	}while(n<1||n>100);
	int i=1;
	printf("\n In ra man hinh day so tu 1 den n:");
	while(i<=n){
		printf(" %d",i);
		i++;
	}int y=1;
	printf("\n In ra man hinh cac so chia het cho 7 tu 1 den n:");
	while(y<=n){
		if(y%7==0) printf(" %d",y);
		y++;
	}int z=1;
	printf("\n In ra man hinh cac so chan chia het cho 7 tu 1 den n: ");
	while(z<=n){
		if(z%7==0&&z%2==0) printf(" %d",z);
		z++;
	}
}
