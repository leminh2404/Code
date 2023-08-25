#include "bits/stdc++.h"
using namespace std;
void nhap(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        cout << " a["<<i<<"] = ";
        cin >> a[i];
    }
}
void xoa(int *a, int *b, int n, int k)
{
    for(int i=0;i<k;i++)
    {
        b[i]=a[i];
    }
    b[k]=a[k+1];
    for(int i=k+1;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n-1;i++)
    cout << " " << b[i];
}
void chen(int *a, int *b, int n, int p, int x)
{
    for(int i=0;i<p;i++)
    {
        b[i]=a[i];
    }
    b[p]=x;
    for(int i=p+1;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    cout << " " << b[i];
}
void chen1(int *a, int *b, int n, int q)
{
    b[0]=q;
    for(int i=1;i<=n;i++)
    {
        b[i]=a[i-1];
    }
    for(int i=0;i<n+1;i++)
    cout << " " << b[i];
}
void timvaxoa(int *a, int *b, int n, int t)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            for(int j=0;j<i;j++)
            b[i]=a[i];
            for(int j=i;j<n;j++)
            b[i]=a[i+1];
        }
    }
    for(int i=0;i<n-1;i++)
    cout << " " << b[i];
}
int main()
{
    int n,k,p,x,q,t;
    cout << " Nhap n: ";
    cin >> n;
    int *a = new int [n];
    nhap(a,n);
    cout << "\n Nhap vi tri can xoa: ";
    cin >> k;
    int *b;
    xoa(a,b,n,k);
    cout << "\n Nhap vi tri can chen: ";
    cin >> p;
    cout << "\n Nhap gia tri chen: ";
    cin >> x;
    chen(a,b,n,p,x);
    cout << "\n Nhap ptu chen dau mang: ";
    cin >> q;
    chen1(a,b,n,q);
    cout << "\n Nhap phan tu can tim va xoa: ";
    cin >> t;
    timvaxoa(a,b,n,t);
}