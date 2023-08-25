#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int y,m,n,a[50][50];
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
    int T=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    T+=a[i][j];
    printf("\n Tong cac phan tu cua ma tran la: %d",T);
    int max=a[0][0];
    printf("\n Gia tri lon nhat tren cot 1 va vi tri cua no la:");
    for(int i=1;i<m;i++)
    if(a[i][0]>max)
    {
        max=a[i][0];
        y=i;
    }printf(" a[%d][0]= %d",y,max); 
    getch();
}