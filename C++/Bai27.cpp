#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int n;
    float a[50];
    do{
        printf(" Nhap n la so phan tu cua mang, n nguyen (n>0): ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=0;i<n;i++){
        printf("\n a[%d]= ",i);
        scanf("%f",&a[i]);
    }printf("\n Mang vua nhap la:");
    for(int i=0;i<n;i++) printf(" %0.2f",a[i]);
    printf("\n Mang sap xep giam dan:");
    int tg;
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    if(a[i]<a[j]){
        tg=a[i];
        a[i]=a[j];
        a[j]=tg;
    }for(int i=0;i<n;i++) printf(" %0.2f",a[i]);
    int t=0;
    for(int i=0;i<n;i++){
        if(a[i]==5){
            t++;
            break;
        } 
    }if(t==0) printf("\n So 5 ko co trong mang"); 
    else if(t==1) printf("\n So 5 co trong mang");
    getch();
}