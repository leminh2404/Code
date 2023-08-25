#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int m, n;
    float a[50][50], T = 1;
    do
    {
        printf(" Nhap so hang cua ma tran: ");
        scanf("%d", &m);
        printf("\n Nhap so cot cua ma tran: ");
        scanf("%d", &n);
    } while (m < 0 && n < 0);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf(" a[%d][%d]= ", i, j);
            scanf("%f", &a[i][j]);
        }
    printf("\n Ma tran vua nhap la:");
    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
            printf("    %0.2f", a[i][j]);
    }
    printf("\n Cac phan tu tren cot 1 cua ma tran:");
    for (int i = 0; i < m; i++)
        printf(" %0.2f", a[i][0]);
    int k;
    do
    {
        printf("\n Nhap K la hang thu may cua ma tran: ");
        scanf("%d", &k);
    } while (k <= 0 || k > m);
    for (int j = 0; j < n; j++)
        T = T * a[k - 1][j];
    printf("\n Tich cac phan tu o hang thu K = %0.2f", T);
    getch();
}