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
    for(int j=0;j<n;j++){
        printf(" a[%d][%d]= ",i,j);
        scanf("%d",&a[i][j]);
    }printf("\n Ma tran vua nhap la:");
    for(int i=0;i<m;i++){
        printf("\n");
        for(int j=0;j<n;j++)
        printf("    %d",a[i][j]);
    }int min=a[0][0];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(a[i][j]<min) min=a[i][j];
    printf("\n Gia tri nho nhat trong ma tran la: %d",min);
    int t=0;
    printf("\n Phan tu chia het cho 5 va vi tri cua no:");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(a[i][j]<0&&a[i][j]%5==0){
        printf(" a[%d][%d] = %d",i,j,a[i][j]);
        t++;
    }if(t==0) printf("\n Trong ma tran khong co phan tu am chia het cho 5");
    getch();
}