#include "stdio.h"
#include "math.h"
int main()
{
    int a[100],n,i;
    printf(" Nhap so phan tu mang n =");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Nhap a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nMang vua nhap la: ");
    for (i=0;i<n;i++)
    printf(" %d ", a[i]);
}
