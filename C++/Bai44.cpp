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
        {
            if(a[i][j]<=10) printf("   %d",a[i][j]);
            else printf("  %d",a[i][j]);
        }
    }
    int T=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    T+=a[i][j];
    printf("\n Tong cac phan tu trong ma tran = %d",T);
    int x=0,y=0;
    int min=a[0][0];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(a[i][j]<min)
    {
      min=a[i][j]; 
      x=i;
      y=j; 
    }
    printf("\n Gia tri nho nhat cua ma tran va vi tri cua no: a[%d][%d]= %d",x,y,min); 
    getch();
}