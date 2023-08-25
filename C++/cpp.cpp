#include "bits/stdc++.h"
#include "string.h"
#include "stdlib.h"
using namespace std;
typedef struct
{
    float dt;
    float da;
    float tong = dt + da;
}Diem;
void Nhap(Diem *a, int n)
{
    for(int i=0;i<n;i++)
    {
    cout << " Nhap diem toan: ";
    cin >> a[i].dt;
    cout << " Nhap diem anh: ";
    cin >> a[i].da;
    }
}
void Xuat(Diem *a, int n)
{
    for(int i=0;i<n;i++)
    {
        cout << " Diem toan: " << a[i].dt << ", diem anh: " << a[i].da << ", tong diem: " << a[i].tong << endl;
    }
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    Diem *a = new Diem [n];
    Nhap(a,n);
    Xuat(a,n);
}
