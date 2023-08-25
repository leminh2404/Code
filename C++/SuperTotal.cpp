#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    A:int n,t=1;
    float T=0;
    printf("\n Nhap so nguyen n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        t=t*i;
        T+=t;
    }
    printf(" Tong 1+1*2+1*2*3+...+1*2*3*...*n = %g",T);
    goto A;
    getch();
}