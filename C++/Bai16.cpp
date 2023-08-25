#include "stdio.h"
#include "math.h"
#include "conio.h"
int main(){
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
    int T=0;
    for(int i=0;i<n;i+=2) T+=a[i];
    printf("\n Tong cac phan tu o vi tri chan cua mang = %d",T);
    printf("\n Gia tri cua cac phan tu chan:");
    for(int i=0;i<n;i+=2) printf(" %d",a[i]); 
    getch();
}