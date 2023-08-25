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
        printf("   %-g",a[i][j]);
    }
    printf("\n Cac so chia het cho 5 trong ma tran:");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if((int)a[i][j]%5==0&&(int)a[i][j]==a[i][j])
    printf(" %g",a[i][j]);
    float max=a[0][0];
    printf("\n Gia tri lon nhat cua hang 1 ma tran:");
    for(int j=0;j<n;j++)
    if(a[0][j]>max) max=a[0][j];
    printf(" %g",max);
    getch();
}