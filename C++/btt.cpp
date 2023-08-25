#include "bits/stdc++.h"
#include "math.h"
#include "conio.h"
using namespace std;
void mang2(int a[100][100], int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << " a["<<i<<"]["<<j<<"] = ";
            cin >> a[i][j];
        }
    }
        cout << " Ma tran vua nhap la:";
        for(int i=0;i<m;i++)
        {
            cout << endl;
            for(int j=0;j<n;j++)
            {
                cout << "     " << a[i][j];
            }
        }
}
void tongam(int a[100][100], int m, int n)
{
    int kt=0;
    int t=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<0)
            {
                kt++;
            }
        }
    }
    if(kt==0)
    {
        cout << "\n Khong co phan tu am nao trong mang";
    }
    else
    {
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<0)
            {
                t+=a[i][j];
            }
        }
    }
    cout << "\n Tong cac phan tu am trong mang = " << t;
    }
}
int max0(int a[100][100], int m, int n)
{
    int max=a[0][0];
    for(int j=0;j<n;j++)
    {
        if(a[0][j]>max)
        {
            max=a[0][j];
        }
    }
    return max;
}
int demduong(int a[100][100], int m, int n)
{
    int dem=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>0)
            {
                dem++;
            }
        }
    }
    return dem;
}
void mtdonvi(int a[100][100], int m, int n)
{
    if(m!=n)
    {
        cout << " Day khong phai ma tran don vi";
    }
    else
    {
        int kt1=0,kt2=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    if(a[i][j]==1)
                    {
                        kt1++;
                    }
                }
                if(i!=j)
                {
                    if(a[i][j]==0)
                    {
                        kt2++;
                    }
                }
            }
        }
        if(kt1==m&&kt2==m*n-kt1)
        {
            cout << " Day la ma tran don vi";
        }
        else
        {
            cout << " Day khong phai ma tran don vi";
        }
    }
}
int main()
{
    int a,b,c[100][100];
    cout << " Nhap so hang cua ma tran: ";
    cin >> a;
    cout << " Nhap so cot cua ma tran: ";
    cin >> b;
    mang2(c,a,b);
    tongam(c,a,b);
    cout << "\n Phan tu lon nhat hang 0 ma tran = " << max0(c,a,b) << endl;
    cout << " So phan tu duong cua mang = " << demduong(c,a,b) << endl;
    mtdonvi(c,a,b);
    getch();
}
