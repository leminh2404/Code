#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int m,n,a[50][50];
    printf(" Nhap so hang cua ma tran: ");
    scanf("%d",&m);
    printf(" Nhap so cot cua ma tran: ");
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf(" Ma tran vua nhap la: ");
    for(int i=0;i<m;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
        {
            printf(" %d",a[i][j]);
        }
    }
    int k,t;
    while(k<1||k>2)
    {
        printf("\n Chon lenh de thuc hien:\n 1. Sap xep ma tran tang dan\n 2. Sap xep ma tran tang dan");
        scanf("%d",&k);
    }
    if(k==1)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(j+1==n)
                if(a[i][j+1]>a[i+1][0])
                {
                    t=a[i][j+1];
                    a[i][j+1]=a[i+1][0];
                    a[i+1][0]=t;
                }
                and (a[i][j]>a[i][j+1])
                {
                    t=a[i][j];
                    a[i][j]=a[i][j+1];
                    a[i][j+1]=t;
                    
                }
                
            }
        }
    }
        printf("\n Ma tran duoc sap xep lai la:");
        for(int i=0;i<m;i++)
        {
            printf("\n");
            for(int j=0;j<n;j++)
            {
                printf(" %d",a[i][j]);
            }
        }
        getch();
}