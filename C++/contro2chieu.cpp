#include "bits/stdc++.h"
#include "conio.h"
using namespace std;
void mang(int **a, int m, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << " a["<<i<<"]["<<j<<"] = ";
            cin >> a[i][j];
        }
    }
    cout << " Mang 2 chieu vua nhap la:";
    for(int i=0;i<m;i++)
    {
        cout << "\n";
        for(int j=0;j<n;j++)
        {
            cout << "    " << a[i][j];
        }
    }
}
int tong(int **a, int m, int n)
{
    int T=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            T+=a[i][j];
        }
    }
    return T;
}
int demam(int **a, int m, int n)
{
    int dem=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<0)
            {
                dem++;
            }
        }
    }
    if(dem==0) return 0;
    else return dem;
}
void lkchan(int **a, int m, int n)
{
    int kt=0;
        for(int j=0;j<m;j++)
        {
            if(a[0][j]%2==0)
            {
                kt++;
            }
        }
    if(kt==0) cout << "\n Khong co phan tu chan trong mang";
    else
    {
        cout << "\n Cac phan tu chan tren hang 0 ma tran:";
        for(int j=0;j<n;j++)
        {
            if(a[0][j]%2==0)
            {
                cout << " " << a[0][j];
            }
        }
    }
}
void mtdx(int **a, int m, int n)
{
    if(m!=n)
    {
        cout << "\n Day ko phai ma tran doi xung";
    }
    else
    {
        int kt1=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            if(a[i][j]!=a[j][i]&&i!=j)
            kt1++;
        }
        cout << "\n";
        cout << " kt1 = " << kt1;
        if(kt1==0)
        {
            cout << "\n Day la ma tran doi xung";
        }
        else
        {
            cout << "\n Day ko phai ma tran doi xung";
        }
    }
}
int main()
{
    int m,n;
    cout << " Nhap so hang cua ma tran: ";
    cin >> m;
    cout << " Nhap so cot cua ma tran: ";
    cin >> n;
    int** a = new int *[m];
    for(int i=0;i<m;i++)
    a[i] = new int [n];
    mang(a,m,n);
    cout << "\n";
    cout << " Tong cac phan tu trong ma tran = " << tong(a,m,n) << endl;
    cout << " So phan tu am trong ma tran: " << demam(a,m,n);
    lkchan(a,m,n);
    mtdx(a,m,n);
    getch();
}
//* 1 2 3 5
  //2 2 4 3
  //3 4 3 6
  //5 3 6 4
