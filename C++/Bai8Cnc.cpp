#include "bits/stdc++.h"
#include "string.h"
#include "stdlib.h"
using namespace std;
typedef struct
{
    char hovaten[20];
    char mts[15];
    float diemtoan;
    float diemanh;
} ThiSinh;
void Nhap(ThiSinh *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap ho va ten cua thi sinh thu " << i + 1 << ": ";
        fflush(stdin);
        gets(a[i].hovaten);
        cout << " Nhap ma sinh vien cua thi sinh: ";
        fflush(stdin);
        gets(a[i].mts);
        cout << " Nhap diem Toan cua thi sinh: ";
        cin >> a[i].diemtoan;
        cout << " Nhap diem Anh cua thi sinh: ";
        cin >> a[i].diemanh;
    }
}
void Xuat(ThiSinh *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " Ho va ten thi sinh vua nhap la " << a[i].hovaten << ", ma sinh vien: " << a[i].mts << ", diem mon Toan: " << a[i].diemtoan << ", diem mon Anh: " << a[i].diemanh << ", tong diem: " << a[i].diemtoan + a[i].diemanh;
        cout << endl;
    }
}
void t8td17(ThiSinh *a, int n)
{
    int kt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].diemtoan >= 8 && (a[i].diemtoan + a[i].diemanh) >= 17)
            kt++;
    }
    if (kt != 0)
    {
        cout << "\n Danh sach thi sinh co diem toan >= 8 va tong diem >= 17 la: \n";
        for (int i = 0; i < n; i++)
        {
            if (a[i].diemtoan >= 8 && (a[i].diemtoan + a[i].diemanh) >= 17)
            {
                cout << " + Ho va ten: " << a[i].hovaten << ", ma sinh vien: " << a[i].mts << endl;
            }
        }
    }
    else
        cout << "\n Khong co thi sinh nao co diem toan >= 8 va tong diem >= 17";
}
void nhapdiemtong(ThiSinh *a, int n, float k)
{
    int kt = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i].diemtoan + a[i].diemanh) == k)
            kt++;
    }
    if (kt != 0)
    {
        cout << "\n Danh sach thi sinh co diem " << k << " la: \n";
        for (int i = 0; i < n; i++)
        {
            if ((a[i].diemtoan + a[i].diemanh) == k)
            {
                cout << " + " << a[i].hovaten << ", " << a[i].mts << endl;
            }
        }
    }
    else
        cout << "\n Khong co thi sinh nao co tong diem = " << k << "";
}
int main()
{
    int n;
    cout << " Nhap so thi sinh can nhap thong tin: ";
    cin >> n;
    ThiSinh *a = new ThiSinh[n];
    Nhap(a, n);
    Xuat(a, n);
    t8td17(a, n);
    float k;
    cout << "\n Nhap tong diem can tim: ";
    cin >> k;
    nhapdiemtong(a, n, k);
    return 0;
}