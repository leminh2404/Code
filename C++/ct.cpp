#include "bits/stdc++.h"
#include "conio.h"
using namespace std;
void fun1(int *m)
{
    *m=1000;
}
int main()
{
    int *a, n, *p;
    cout << " Nhap so phan tu cua mang: ";
    cin >> n;
    a = new int[n];
    for(int i=0;i<n;i++)
    {
        cout << " a[" << i << "] = ";
        cin >> a[i];
    }
    p=a;
    cout << " *p = " << *p << endl;
    cout << " Mang vua nhap la:";
    for(int i=0;i<n;i++)
    {
        cout << " " << *p;
        p++;
    }
    fun1(&n);
    cout << endl;
    cout << " n = " << n;
    getch();
}