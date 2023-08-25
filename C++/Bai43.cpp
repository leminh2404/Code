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
        {
            if(a[i][j]<=10) printf("   %g",a[i][j]);
            else printf("  %g",a[i][j]);
        }
    }int k;
    float T=0;
    do{
        printf("\n Nhap hang so k cua ma tran: ");
        scanf("%d",&k);
    }while(k<=0||k>m);
    for(int j=0;j<n;j++)
    T+=a[k-1][j];
    printf("\n Tong cac phan tu tren hang %d = %g",k,T);
    int b=0,c=0;
    float max=a[0][0];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(a[i][j]>max)
    {
        max=a[i][j];
        b=i;
        c=j;
    }
    printf("\n Gia tri lon nhat cua ma tran va vi tri cua no: a[%d][%d]= %g",b,c,max);
    getch();
}