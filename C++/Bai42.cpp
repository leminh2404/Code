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
            if(a[i][j]<=10)printf("   %d",a[i][j]);
            else printf("  %d",a[i][j]);
        }    
    }
    int dem=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(a[i][j]%2==1) dem++;
    printf("\n Ma tran co %d phan tu le",dem);
    printf("\n Cac so chan trong hang 1 cua ma tran:");
    int t=0;
    for(int j=0;j<n;j++)
    if(a[0][j]%2==0)
    {
        printf(" %d",a[0][j]);
        t++;
    } 
    if(t==0) printf(" Khong co phan tu chan o hang 1 ma tran");
    getch();
}