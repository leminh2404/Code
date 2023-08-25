#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    A:int n,k,a[50],t;
    printf("\n Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf(" a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf(" Mang vua nhap la:");
    for(int i=0;i<n;i++)
    printf(" %d",a[i]);
    printf("\n 1. Sap xep mang tang dan\n 2. Sap xep mang giam dan\n 3. Tinh tong chan, le, am, duong va TBC\n 4. So lon nhat, nho nhat");
    while(k<1||k>4)
    {
        printf("\n Chon lenh de thuc hien: ");
        scanf("%d",&k);
    }
    if(k==1)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        printf(" Mang tang dan la:");
        for(int i=0;i<n;i++)
        printf(" %d",a[i]);
    }
    else if(k==2)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        printf(" Mang giam dan la:");
        for(int i=0;i<n;i++)
        printf(" %d",a[i]);  
    }
    else if(k==3)
    {
        float T1=0,T2=0,T3=0,T4=0;
        int dem1=0,dem2=0,dem3=0,dem4=0;
        for(int i=0;i<n;i++)
        if(a[i]%2==0)
        {
            T1+=a[i];
            dem1++;
        } 
        if(T1!=0) printf("Tong cac so chan trong mang = %g, TBC = %g",T1,T1/dem1);
        else printf("\n Khong co so chan trong mang");
        for(int i=0;i<n;i++)
        if(a[i]%2!=0)
        {
            T2+=a[i];
            dem2++;
        } 
        if(T2!=0) printf("\n Tong cac le trong mang = %g, TBC = %g",T2,T2/dem2);
        else printf("\n Khong co so le trong mang");
        for(int i=0;i<n;i++)
        if(a[i]>0)
        {
            T3+=a[i];
            dem3++;
        } 
        if(T3!=0) printf("\n Tong cac so duong trong mang = %g, TBC = %g",T3,T3/dem3);
        else printf("\n Khong co so duong trong mang");
        for(int i=0;i<n;i++)
        if(a[i]<0)
        {
            T4+=a[i];
            dem4++;
        } 
        if(T4!=0) printf("\n Tong cac so am trong mang = %g, TBC = %g",T4,T4/dem4);
        else printf("\n Khong co so am trong mang");
    }
    else if(k==4)
    {
        int max=a[0],min=a[0];
        for(int i=0;i<n;i++)
        if(a[i]>max) max=a[i];
        for(int i=0;i<n;i++)
        if(a[i]<min) min=a[i];
        printf(" So lon nhat trong mang la: %d\n So nho nhat trong mang la: %d",max,min);
    }
    int x,c=0;
    printf("\n Nhap so bat ki: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf(" So vua nhap co trong mang");
            break;
        }
        else c++;
    }
    if(c==n) printf(" So vua nhap khong co trong mang");
    getch();
}