#include "stdio.h"
#include "math.h"
int main()
{
    int a[50],n,dem=0;
    float T=0;
    printf(" Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf(" a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        dem++;
        T+=a[i];
    }
    printf("\n TBC cac phan tu trong mang = %g",T/dem);
}