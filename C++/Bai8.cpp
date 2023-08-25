#include "stdio.h"
#include "math.h"
int main()
{
	int n,i=1;
	do{
		printf(" Nhap n (1<n<100): ");
		scanf("%d",&n);
	}while(n<=1||n>=100);
	printf("\n In ra man hinh day so tu 1 den n: ");
	while(i<=n){
		printf(" %d",i);
		i++;
	}int T=0;
	for(int i=1;i<=n;i++){
		if(i%2==0) T+=i;
	}printf("\n Tong cac so chan trong khoang tu 1 den n la: %d",T);
}
