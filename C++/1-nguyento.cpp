#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
A:
    int n, t = 0;
    printf("\n Nhap so nguyen bat ki: ");
    scanf("%d", &n);
    if (n == 2)
        printf("\n Day la so nguyen to");
    else if (n < 2)
        printf("\n Day ko phai so nguyen to");
    else if (n > 2)
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                t++;
                printf("\n Day ko phai so nguyen to");
                break;
            }
        }
    if (t == 0 && n != 2)
        printf("\n Day la so nguyen to");
    goto A;
    getch();
}
