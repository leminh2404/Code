#include "stdio.h"
#include "math.h"
int main()
{
    printf("Gia cong thiet bi");
    int n, m;
Nhap:
    do
    {
        printf("\n Nhap n la thoi gian gia cong 1 thiet bi: ");
        scanf("%d", &n);
    } while (n < 1 || n > 60);
    do
    {
        printf("\n Nhap m la so thiet bi can gia cong: ");
        scanf("%d", &m);
    } while (m < 1);
    printf("\n Tong thoi gian gia cong la: %d", n * m);
    if (n * m < 100)
        printf("\n Tong chi phi gia cong la: %d", m * 800);
    else
        printf("\n Tong chi phi gia cong la: %d", m * 900);
    goto Nhap;
}
