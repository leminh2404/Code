#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
A:
    int n, a[50][50];
    do
    {
        printf("\n Nhap ma tran vuong cap n (2<=n<=5): ");
        scanf("%d", &n);
    } while (n < 2 || n > 5);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            printf(" a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf(" Ma tran vua nhap la:");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] <= 10)
                printf("   %d", a[i][j]);
            else
                printf("  %d", a[i][j]);
        }
    }
    int k, dem = 0;
    do
    {
        printf("\n Nhap hang thu k cua ma tran: ");
        scanf("%d", &k);
    } while (k <= 0 || k > n);
    for (int j = 0; j < n; j++)
        if (a[k - 1][j] > 0)
            dem++;
    if (dem == 0)
        printf(" Tren hang %d khong co so duong", k);
    else
        printf(" Tren hang %d co %d so duong", k, dem);
    goto A;
}