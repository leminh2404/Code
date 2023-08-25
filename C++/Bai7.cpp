#include <stdio.h>
#include <math.h>
int main()
{
	int x,y;
	do{
		printf(" Nhap so nguyen x: ");
		scanf("%d",&x);
		printf(" Nhap so nguyen y: ");
		scanf("%d",&y);
	}while(x>y);
	printf(" Tong 2 so x va y la: %d",x+y);
	int Tong=0;
	for (int i=x;i<=y;i++){
		Tong +=i;
	}printf("\n Tong cac so trong khoang cua 2 so la: %d",Tong);
	printf("\n Cac so chan trong khoang 2 so x y la: ");
    for (int a=x;a<=y;a++){
	if(a%2==0){ 
	printf("\n %d",a);
	}
	}    
}

