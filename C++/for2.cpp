#include <stdio.h>
#include <conio.h>
int main () {
   int n,Tong=0;
   printf (" Nhap n = ");
   scanf ("%d" , &n);
   for (int i=2; i<=n; i=i+2)
   {
      Tong +=i; // Tong=Tong+i;
   }
   printf ("Tong = %d",Tong);
   getch () ;
}
