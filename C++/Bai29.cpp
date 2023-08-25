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
        printf("\n Nhap a[%d][%d]= ",i,j);
        scanf("%d",&a[i][j]);
    }printf("\n Ma tran vua nhap la:");
    for(int i=0;i<m;i++){
        printf("\n");
        for(int j=0;j<n;j++)
        printf(" %d",a[i][j]);
    }int max=a[0][0];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(a[i][j]>max) max=a[i][j];  
    printf("\n Gia tri lon nhat trong ma tran la: %d",max);
    int T=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(i==j) T+=a[i][j];
    if(m==n) printf("\n Tong cac phan tu tren duong cheo chinh la: %d",T);
    else printf("\n Day ko phai ma tran vuong, ko ton tai duong cheo chinh");
    getch();
}