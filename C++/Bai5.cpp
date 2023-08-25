#include "stdio.h"
#include "math.h"
int main()
{
	Nhap:printf(" Gia cong man hinh");
	int t,m;
	do{
		printf("\n Nhap t la thoi gian gia cong 1 thiet bi: ");
		scanf("%d",&t);
	}while(t<1||t>30);
	do{
		printf("\n Nhap m la so thiet bi can gia cong: ");
		scanf("%d",&m);
	}while(m<1);
	printf("\n Tong thoi gian gia cong la: %d",t*m);
	printf("\n Tong chi phi gia cong la: %d",500*m);
	goto Nhap;
}
	
