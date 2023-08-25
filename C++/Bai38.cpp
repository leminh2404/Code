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
    printf("\n Cac phan tu le trong ma tran:");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(a[i][j]%2!=0) printf(" %d",a[i][j]);
    int k,dem=0;
    float T=0;
    do{
        printf("\n Nhap hang thu k cua ma tran: ");
        scanf("%d",&k);
    }while(k<=0||k>m);
    for(int j=0;j<n;j++)
    {
        T+=a[k-1][j];
        dem++;
    }
    printf("\n TBC cac phan tu o hang %d = %0.2f",k,T/dem);
    getch();
}