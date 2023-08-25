#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    printf(" Kiem tra so nguyen to");
    A:int n,dem=0;
    printf("\n Nhap so nguyen bat ki: ");
    scanf("%d",&n);
    if(n==1||n<=0) printf(" Day ko phai so nguyen to");
    else if(n==2) printf(" Day la so nguyen to");
    else
    {
        for(int i=2;i<sqrt(n);i++)
        {
           if(n%i==0)
           {
              dem++;
              break;
           }  
        }    
    }
    if(dem==0&&n>2) printf(" Day la so nguyen to");
    else if(dem!=0&&n>2) printf(" Day ko phai so nguyen to");
    goto A;
    getch();
}