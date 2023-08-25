#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int m,n;
    float a[50][50];
    do{
        printf(" Nhap so hang cua ma tran: ");
        scanf("%d",&m);
        printf(" Nhap so cot cua ma tran: ");
        scanf("%d",&n);
    }while(m<0&&n<0);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        printf(" a[%d][%d]= ",i,j);
        scanf("%f",&a[i][j]);
    }
    printf(" Ma tran vua nhap la:");
    for(int i=0;i<m;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
        printf("   %0.2f",a[i][j]);
    }
    printf("\n Cac phan tu thuoc hang 1 cua ma tran:");
    for(int j=0;j<n;j++) printf(" %0.2f",a[0][j]);
    for(int i=0;i<m;i++)
    {
        float T=0;
        for(int j=0;j<n;j++)
        T+=a[i][j];
        printf("\n Tong cac phan tu thuoc hang %d = %0.2f",i+1,T);
    }
    getch();
}