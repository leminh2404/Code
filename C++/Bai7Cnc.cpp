#include "bits/stdc++.h"
#include "stdlib.h"
using namespace std;
void Nhap(int **a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void Xuat(int **a, int n)
{
    cout << " Ma tran vuong vua nhap la: ";
    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << "  " << a[i][j];
        }
    }
}
int tongcheo(int **a, int n)
{
    int T = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                T += a[i][j];
            }
        }
    }
    return T;
}
int tongcoth(int **a, int n, int h)
{
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        t += a[i][h - 1];
    }
    return t;
}
int main()
{
    int n;
    cout << " Nhap ma tran vuong co nxn: ";
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    Nhap(a, n);
    Xuat(a, n);
    cout << "\n Tong cac phan tu tren duong cheo chinh = " << tongcheo(a, n);
    int h;
    do
    {
        cout << "\n Nhap cot thu n de tinh tong phan tu tren cot do: ";
        cin >> h;
    } while (h <= 0 || h > n);
    cout << " Tong cac phan tu tren cot do = " << tongcoth(a, n, h);
}
