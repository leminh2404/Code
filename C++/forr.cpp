#include "stdio.h"
#include "math.h"
int main()
{
	int n,x;
	do{
		printf(" Nhap n: ");
		scanf("%d",&n);
		printf("\n Nhap x: ");
		scanf("%d",&x);
	}while(n<1||n>=1000&&x<=1||x>=n);
	printf(" 1. In ra cac so tu 1 den n:");
	for(int i=1;i<=n;i++){
		printf(" %d",i);
	}printf("\n 2. In ra cac so chan tu 1 den n:");
	for(int i=1;i<=n;i++){
		if(i%2==0){
		printf(" %d",i);
		} 	
	}printf("\n 3. In ra cac so le tu 1 den n:");
	for(int i=1;i<=n;i++){
		if(i%2!=0) printf(" %d",i);
	}printf("\n 4. In ra man hinh cac so chan tu x den n: ");
	for(int i=x;i<=n;i+=1){
		if(i%2==0)
		printf(" %d",i);
	}
	int dem=0,T=0,TBC;
	for(int i=x;i<=n;i+=1){
		if(i%3==0){
			T+=i;
			dem++;
		}
	}printf("\n 5. TBC cac so chia het cho 3 tu x den n = %d",T/dem);	
}
