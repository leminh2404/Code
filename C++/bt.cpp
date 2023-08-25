//Nhập vào 1 mảng 2 chiều (ma trận) số nguyên gồm m hàng n cột
// xuất ra mh mảng 2 chiều dưới dạng ma trận
// tính tổng các ptu trong mảng có giá trị âm
// tìm ptu lon nhat trên hàng  0 của ma trận (hàng 1)
// đếm số ptu dương của ma trận
// kiểm tra xem ma trận có là ma trận đơn vị ko
#include "stdio.h"
#include "iostream"
#include "conio.h"
#include "math.h"
using namespace std;
void mang2(int a[], int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" a[%d][%d] = ");
            scanf("%d",&a[i][j]);
        }
    }
    cout << " Ma tran vua nhap la:" << endl;
    for(int i=0;i<m;i++)
    {
        cout << endl;
        for(int j=0;j<n;j++)
        {
            cout << " " << a[i][j];
        }
    }
}
int tongam(int a[], int m, int n)
{
    int t=0;
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
    return t;
}
int max0(int a[], int m, int n)
{
    max=a[0][0];
    for(int j=0;j<n;j++)
    {
        if(a[0][j]>max)
        {
            max=a[0][j];
        }
    }
    return max;
}
int demduong(int a[], int m, int n)
{
    int a[100];
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
void mtdonvi(int a[], int m, int n)
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
    int a,b,c[100];
    cout << " Nhap so hang cua ma tran: ";
    cin >> a;
    cout << " Nhap so cot cua ma tran: ";
    cin >> b;
    mang2(c,a,b);
    cout << " Tong cac phan tu trong mang = " << tongam(c,a,b) << endl;
    cout << " Phan tu lon nhat hang 0 ma tran = " << max0(c,a,b) << endl;
    cout << " So phan tu duong cua mang = " << demduong(c,a,b) << endl;
    mtdonvi(c,a,b);
}