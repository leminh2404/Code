#include "stdio.h"
#include "math.h"
int main()
{
	int n,a[50],kt;
	printf(" Nhap n la so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);
	}printf("\n Cac so duong chan trong mang la:");
	for(int i=0;i<n;i++){
	    int kt=1;
		if(a[i]>0&&a[i]%2!=0) kt++;if(kt==1) printf(" %d",a[i]);
	}
}
