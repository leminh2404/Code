#include <iostream>
using namespace std;
void Nhap(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void Xuat(int **a, int m, int n)
{
    cout << " Ma tran vua nhap la:";
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << " " << a[i][j];
        }
    }
}
void Sxtang(int **a, int m, int n)
{
    int b[m * n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int c = 0; c < m * n; c++)
            {
                b[c] = a[i][j];
                cout << " " << b[c];
            }
        }
    }
    int t;
    for (int i = 0; i < m * n - 1; i++)
    {
        if (b[i] > b[i + 1])
        {
            t = b[i];
            b[i] = b[i + 1];
            b[i + 1] = t;
        }
    }
    cout << "\n Mang sau khi sap xep la: ";
    for (int i = 0; i < m * n; i++)
    {
        if (i % (m - 1) == 0)
            cout << "\n";
        cout << " " << b[i];
    }
}
int main()
{
    int m, n;
    cout << " Nhap so hang cua ma tran: ";
    cin >> m;
    cout << " Nhap so cot cua ma tran: ";
    cin >> n;
    int **a = new int *[m];
    for (int i = 0; i < m; i++)
        a[i] = new int[n];
    Nhap(a, m, n);
    Xuat(a, m, n);
    Sxtang(a, m, n);
}