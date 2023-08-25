#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	Nhapson:
int n;
    printf("\nNhap so tu nhien n: ");
    scanf("%d",&n);
    float t=sqrt(n);
    if(t==(int)t){
        printf("%d la so chinh phuong",n);
    } else{
        printf("%d khong phai la so chinh phuong",n);	
	}
goto Nhapson;	    
}
