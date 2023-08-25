#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int m,n,a[50][50];
    printf(" Nhap so hang cua ma tran: ");
    scanf("%d",&m);
    printf("\n Nhap so cot cua ma tran: ");
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        printf(" a[%d][%d]= ",i,j);
        scanf("%d",&a[i][j]);
    }printf("\n Ma tran vua nhap la:");
    for(int i=0;i<m;i++){
        printf("\n");
        for(int j=0;j<n;j++)
        printf("     %d",a[i][j]);
    }
    printf("\n Gia tri hang 1 cua ma tran:");
    for(int j=0;j<n;j++)
    printf(" %d",a[0][j]);
    int k,dem=0;
    float T=0;
    do{
        printf("\n Nhap K la cot thu may cua ma tran (0<k<=n): ");
        scanf("%d",&k);
    }while(k<=0||k>n);
    for(int i=0;i<m;i++){
        T+=a[i][k-1];
        dem++;
    }printf("\n TBC cac phan tu o cot thu K = %0.2f",T/dem);
    getch();
}