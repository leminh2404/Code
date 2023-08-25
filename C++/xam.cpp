#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    A:float a,b;
    printf("\n Tinh hieu cua 2 so a - b");
    printf("\n Nhap so a: ");
    scanf("%f",&a);
    printf(" Nhap so b: ");
    scanf("%f",&b);
    if(a==14&&b==6) printf(" 14 - 6 = 7");
    else printf(" %g - %g = %g",a,b,a-b);
    goto A;
    getch();
}