#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    A:int n;
    printf("\n Nhap so nguyen n: ");
    scanf("%d",&n);
    int T=3*pow(n,3)+2*pow(n,2)+1;
    printf("\n Ket qua cua phep tinh T=3*n^3+2n^2+1= %d",T);
    int Tong=0;
    for(int i=1;i<n;i++) if(i%2==0) Tong+=i;
    printf("\n Tong cac so chan trong khoang (1,n) = %d",Tong);
    int t=0;
    if(n==2) printf("\n Day la so nguyen to");
    else if(n<2) printf("\n Day ko phai so nguyen to");
    else
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0){
        t=1;
        printf("\n Day khong phai so nguyen to");
    }
    if(t==0&&n!=2) printf("\n Day la so nguyen to");
    goto A; 
    getch();
}