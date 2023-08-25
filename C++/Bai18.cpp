#include "stdio.h"
#include "math.h"
#include "conio.h"
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
    for(int i=0;i<n;i++) printf(" %d",a[i]);
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++) if(a[i]>max) max=a[i];
    printf("\n So lon nhat trong mang la: %d",max);
    for(int i=1;i<n;i++) if(a[i]<min) min=a[i];
    int b=min;
    for(int i=0;i<n;i++) if(a[i]>0) if(a[i]%2==0&&a[i]>b) b=a[i];
    printf("\n So chan lon nhat trong mang la: %d",b);
    getch();
}