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
    printf("\n Ma tran vua nhap la:");
    for(int i=0;i<m;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
        printf("   %g",a[i][j]);
    }
    int dem=0;
    float T=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        T+=a[i][j]; 
        dem++;
    }
   printf("\n TBC cac phan tu cua ma tran = %g",T/dem);
   int k;
   float t=1;
   do{
       printf("\n Nhap hang thu k cua ma tran: ");
       scanf("%d",&k);
   }while(k<=0||k>m);
   for(int j=0;j<n;j++)
   t=t*a[k-1][j];
   printf("\n Tich cac phan tu o hang %d = %0.2f",k,t);
    getch();
}