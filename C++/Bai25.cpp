#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    A:int n,dem=0;
    float a[50],T=0;
    do{
        printf("\n Nhap n la so phan tu cua mang, n nguyen (n>0): ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=0;i<n;i++){
        printf("\n a[%d] = ",i);
        scanf("%f",&a[i]);
    }printf("\n Mang vua nhap la: ");
    for(int i=0;i<n;i++)
    printf(" %0.2f",a[i]);
    for(int i=0;i<n;i++)
    if(10.5<=a[i]&&a[i]<=100){
        T+=a[i];
        dem++;
    }if(dem!=0) printf("\n TBC cac gia tri trong doan tu 10.5 den 100 = %0.2f",T/dem);
    else printf("\n Khong co gia tri thoa man de tinh TBC");
    float max=a[0];
    for(int i=0;i<n;i++) if(a[i]>max) max=a[i];
    printf("\n Gia tri lon nhat cua mang la: %0.2f",max);
    goto A;
    getch(); 
}