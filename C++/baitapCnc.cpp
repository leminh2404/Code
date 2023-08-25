#include "bits/stdc++.h"
#include "conio.h"
using namespace std;
void mang(float a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << " a["<<i<<"] = ";
        cin >> a[i];
    }
    cout << " Mang vua nhap la:";
    for(int i=0;i<n;i++)
    {
        cout << " " << a[i];
    }
}
void tongam(float a[], int n)
{
    float T=0,m=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
        }
    }
    if(m>=0)
    {
        cout << "\n Khong co so am trong mang";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                T+=a[i];
            }
        }
        cout << "\n Tong cac so am trong mang = " << T;
    }  
}
void duongmin(float a[], int n)
{
    float max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    if(max<=0)
    {
        cout << "\n Khong co so duong nho nhat trong mang";
    }
    else
    {
        float min=max;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                if(a[i]<min)
                {
                    min=a[i];
                }
            }
        }
        cout << "\n So duong nho nhat trong mang la: " << min;
    }
}
float tbc(float a[], int n)
{
    float t;
    int dem=0;
    for(int i=0;i<n;i++)
    {
        dem++;
        t+=a[i];
    }
    return t/dem;
}
int main()
{
    A:cout << endl;
    float a[50];
    int m;
    do
    {
        cout << " Nhap so phan tu cua mang: ";
        cin >> m;
    }
    while(m<=0);
    mang(a,m);
    tongam(a,m);
    duongmin(a,m);
    cout << "\n TBC cac phan tu trong mang = " << setprecision(3) << fixed << tbc(a,m);
    goto A;
    getch();
}
