#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[n];
    printf("nhap n:");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("\ngia tri cua a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(int i=0;i<n;++i){
            int dem=0;

    for(int j=2;j<=sqrt(a[i]);++j)
    {
       if(a[i]%j==0)
       {
         dem++;
       }
    }
    if(dem==0&&a[i]!=1) printf("%d ",a[i]);
    }
}

