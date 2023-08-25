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
    for(int j=0;j<n;j++){
        printf(" a[%d][%d]= ",i,j);
        scanf("%f",&a[i][j]);
    }printf("\n Ma tran vua nhap la:");
    for(int i=0;i<m;i++){
        printf("\n");
        for(int j=0;j<n;j++)
        printf("    %0.2f",a[i][j]);
    }printf("\n Cac phan tu tren cot 1 la:");
    for(int i=0;i<m;i++) printf(" %0.2f",a[i][0]);
    for(int j=0;j<n;j++){
        float T=0;
        for(int i=0;i<n;i++) T+=a[i][j];
        printf("\n Tong cac phan tu o cot %d = %0.2f",j+1,T);
    }getch();  
}