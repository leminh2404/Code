#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
A:
    int m, n, a[50][50], k;
    printf("\n Nhap so hang cua ma tran: ");
    scanf("%d", &m);
    printf(" Nhap so cot cua ma tran: ");
    scanf("%d", &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf(" a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf(" Ma tran vua nhap la:");
    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
            printf(" %d", a[i][j]);
    }
    printf("\n Nhap cot thu k cua ma tran: ");
    scanf("%d", &k);
    float T;
    int dem = 0;
    while (k > n || k <= 0)
    {
        printf(" Nhap cot thu k cua ma tran: ");
        scanf("%d", &k);
    }
    for (int i = 0; i < m; i++)
    {
        T += a[i][k - 1];
        dem++;
    }
    printf(" TBC cac phan tu o cot thu %d cua ma tran = %g", k, T / dem);
    goto A;
    getch();
}