#include "stdio.h"
#include "math.h"
int main()
{
	int n,x,i=0;
	do{
		printf(" Nhap n (1<=n<=500): ");
		scanf("%d",&n);
	}while(n<1||n>500);
	do{
		printf("\n Nhap x (1<=x<=n): ");
		scanf("%d",&x);
	}while(x<1||x>n);
	printf("\n Cac so chan trong khoang tu 1 den n la: ");
	while(i<=n){
		if(i%2==0) printf(" %d",i);
		i++;
	}int dem=0;
	float T=0;
	for(int i=x;i<=n;i++){
		T+=i;
		dem++;
	}printf("\n TBC cac so trong khoang tu x den n = %0.2f",T/dem);
}
