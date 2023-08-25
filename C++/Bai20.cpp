#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int n,x,a[50];
    do{
        printf(" Nhap n la so phan tu cua mang: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=0;i<n;i++){
        printf("\n a[%d] = ",i);
        scanf("%d",&a[i]);
    }printf("\n Mang vua nhap la:");
    for(int i=0;i<n;i++) printf(" %d",a[i]);
    printf("\n Nhap x la 1 so bat ki: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++) if(a[i]-x==0) printf("\n X vua nhap co trong mang");
    int dem=0,T=0;
    for(int i=0;i<n;i++) if(a[i]>0){
        T+=a[i];
        dem++;
    }printf("\n Tong cac so duong trong mang la: %d",T);
    getch();
}