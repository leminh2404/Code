#include "stdio.h"
#include "math.h"
int main()
{
    int n;
    do
    {
        printf(" Nhap so nguyen n (1<=n<=100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    printf("\n In ra man hinh day so le tu 1 den n:");
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            printf(" %d", i);
    }
    int T = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            T += i;
        i++;
    }
    printf("\n Tong cac so chia het cho 3 tu 1 den n = %d", T);
    int dem = 0;
    float TBC = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 2 == 0)
        {
            TBC += i;
            dem++;
        }
    }
    printf("\n TBC cac so chan chia het cho 5 tu 1 den n = %0.2f", TBC / dem);
}
