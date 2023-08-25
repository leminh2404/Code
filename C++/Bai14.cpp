#include "stdio.h"
#include "math.h"
int main()
{
    int n,a[50];
    do{
        printf(" Nhap n la so phan tu cua mang (n>0): ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=0;i<n;i++){
        printf("\n a[%d] = ",i);
        scanf("%d",&a[i]);
    }printf("\n Mang vua nhap la:");
    for(int i=0;i<n;i++) 
    printf(" %d",a[i]);
    printf("\n Cac so duong trong mang la:");
    for(int i=0;i<n;i++) 
    if(a[i]>0) printf(" %d",a[i]);
    int max=a[0],min=a[0],dcmin;
    for(int i=0;i<n;i++)
    if(a[0]<a[i]) max=a[i];
    printf("\n So lon nhat trong mang la: %d",max);
    for(int i=0;i<n;i++) 
    if(a[0]>a[i]) min=a[i];
    printf("\n So nho nhat trong mang la: %d",min);
    int b=max;
    if(b<0&&b<0) 
    printf("\n Khong co so duong chan nho nhat trong mang");
    else if(b>0&&b>0) 
    for(int i=0;i<n;i++) 
    if(a[i]>0&&a[i]%2==0&&a[i]<b) 
    b=a[i];
    printf("\n So duong chan nho nhat trong mang la: %d",b);
}