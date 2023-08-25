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
    int min=a[0];
    for(int i=0;i<n;i++) if(a[i]<min) min=a[i];
    int tg;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]<a[j]){
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
        }    
        }
    }printf("\n Sap xep cac phan tu mang giam dan:");
    for(int i=0;i<n;i++) printf(" %d",a[i]); 
    getch();
    }
     
