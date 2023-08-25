#include "stdio.h"
#include "math.h"
int main()
{
	int n;
	int i=0;
	printf(" Nhap so n= ");
	scanf("%d",&n);
	int a=0;
	while (i<=n){
		a=a+i; i++;
	}
	printf("%d",a);
}
