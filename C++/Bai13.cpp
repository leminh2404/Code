#include "stdio.h"
#include "math.h"
int main()
{
    int n;
    float a[50];
    do {
        printf(" Nhap n la so phan tu cua mang (n>0): ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=0;i<n;i++){
        printf("\n a[%d] = ",i);
        scanf("%f",&a[i]);
    }printf("\n Mang vua nhap la:");
    for(int i=0;i<n;i++) printf(" %0.2f",a[i]);
    printf("\n Cac phan tu lon hon 0 la:");
    for(int i=0;i<n;i++) if(a[i]>0) printf(" %0.2f",a[i]);
    int dem=0;
    float Tong=0;
    for(int i=0;i<n;i++){
        if(a[i]>0) Tong+=a[i];
        dem++;
    }printf("\n TBC cac phan tu duong trong mang la: %0.2f",Tong/dem);
system("pause");
return 0;
}