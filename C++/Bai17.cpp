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
    int min=a[0],max=a[0];
    for(int i=0;i<n;i++) if(a[i]<a[0]) min=a[i];
    printf("\n So nho nhat trong mang la: %d",min);
    for(int i=0;i<n;i++) if(a[i]>a[0]) max=a[i];
    int min1=min;
    if(min1>0) printf("\n Khong co so am lon nhat trong mang");
    else if(min1<0){
        for(int i=0;i<n;i++) if(a[i]<0&&a[i]>min1) min1=a[i];
        printf("\n So am lon nhat trong mang la: %d",min1);
    } getch();
}