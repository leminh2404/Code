#include "stdio.h"
#include "math.h"
int main()
{
	int x,y,z;
	printf(" Nhap 2 so x, y (x<y)");
		printf("\n Nhap so x: ");
		scanf("%d",&x);
		printf("\n Nhap so y: ");
		scanf("%d",&y);
	while (x<y){
		z = z + x;
		x++;
	}
	printf("\n Tong cac so trong khoang tu x den y = %d",z);	
}
