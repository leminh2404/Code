#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() 
{
    A: printf("\n");
    int n,t=1;
    do
    {
        printf(" Nhap n la so cac so nguyen to dau tien can in: ");
        scanf("%d",&n);
    }
    while(n<=0); 
    printf(" Day cac so nguyen to gom n so: 2");
    for(int i=3;i<999999999;i++)
    {
        int dem=0;
        for(int j=2;j<=sqrt(i);j++)
        {
           if(i%j==0&&i>2)
           dem++;
        }
        if(dem==0)
        {         
            if(t<n)
            {
                t++;
                printf(" %d",i);              
            }          
        }
        if(t==n) break;    
    } 
    goto A;
    getch();
}