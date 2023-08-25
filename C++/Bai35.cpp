#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int m,n,a[50][50];
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
        scanf("%d",&a[i][j]);
    }
    printf(" Ma tran vua nhap la:");
    for(int i=0;i<m;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
        printf("   %d",a[i][j]);
    }
    int dem=0,sum=0;
    float T=0,t=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        T+=a[i][j];
        dem++;
    }
    printf("\n TBC cac phan tu cua ma tran la: %g",T/dem);
    for(int j=0;j<n;j++)
    {
       t+=a[m-1][j];
       sum++;
    }
    printf("\n TBC cac phan tu hang cuoi ma tran = %g",t/sum);
}