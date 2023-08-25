#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int n;
    float a[50];
    do{
        printf(" Nhap n la so phan tu cua mang: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=0;i<n;i++){
        printf("\n a[%d] = ",i);
        scanf("%f",&a[i]);
    }printf("\n Mang vua nhap la:");
    for(int i=0;i<n;i++) printf(" %0.2f",a[i]);
    float T=0;
    for(int i=0;i<n;i++) T+=a[i];
    printf("\n Tong cac phan tu trong mang la: %0.2f",T);
    float c;
    printf("\n Nhap so c bat ki: ");
    scanf("%f",&c);
    for(int i=0;i<n;i++) if(a[i]==c){
        printf("\n c vua nhap co trong mang");
        printf("\n a[%d] = 0",i);
    } 
    getch();
}