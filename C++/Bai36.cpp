#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int m,n;
    float a[50][50],T=0;
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
    float min=a[0][0];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(a[i][j]<min) min=a[i][j];
    printf("\n Gia tri nho nhat cua ma tran = %0.2f",min);
    int k;
    do{
       printf("\n Nhap cot thu k cua ma tran: ");
       scanf("%d",&k); 
    }while(k<=0||k>n);
    for(int i=0;i<m;i++)
    T+=a[i][k-1];
    printf("\n Tong cac phan tu tren cot %d = %0.2f",k,T);
    getch();
}