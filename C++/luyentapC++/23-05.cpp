#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
typedef struct
{
    char tenmay[10];
    char mamay[10];
    int ngay, thang, nam;
    char nsx[10];
    float gia;
} MayTinh;
void Nhap(MayTinh *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap ten may cua may tinh thu " << i + 1 << ": ";
        fflush(stdin);
        gets(a[i].tenmay);
        cout << " Nhap ma may cua may tinh thu " << i + 1 << ": ";
        fflush(stdin);
        gets(a[i].mamay);
        cout << " Nhap ngay san xuat: ";
        cin >> a[i].ngay;
        cout << " Nhap thang san xuat: ";
        cin >> a[i].thang;
        cout << " Nhap nam san xuat: ";
        cin >> a[i].nam;
        cout << " Nhap ten nha san xuat: ";
        fflush(stdin);
        gets(a[i].nsx);
        cout << " Nhap gia: ";
        cin >> a[i].gia;
    }
}
void Xuat(MayTinh *a, int n)
{
    cout << " Danh sach vua nhap la: \n";
    for (int i = 0; i < n; i++)
    {
        cout << " + Ten may tinh thu " << i + 1 << ": " << a[i].tenmay << ", ten ma may " << i + 1 << ": " << a[i].mamay << ", ngay san xuat: " << a[i].ngay << "/" << a[i].thang << "/" << a[i].nam << ", ten nha san xuat: " << a[i].nsx << ", gia: " << a[i].gia;
    }
}
void nsxSAMSUNG(MayTinh *a, int n)
{
    int kt = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].nsx, "SAMSUNG") == 0)
            kt++;
    }
    if (kt != 0)
    {
        cout << "\n Danh sach may tinh thuoc nha san xuat SAMSUNG la: \n";
        for (int i = 0; i < n; i++)
        {
            if (strcmp(a[i].nsx, "SAMSUNG") == 0)
            {
                cout << " + Ten may: " << a[i].tenmay << ", mamay: " << a[i].mamay << ", ngay san xuat: " << a[i].ngay << "/" << a[i].thang << "/" << a[i].nam;
            }
        }
    }
    else
        cout << "\n Khong co may tinh nao cua nha san xuat SAMSUNG";
}
void namsx2020(MayTinh *a, int n)
{
    int kt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].nam == 2020)
            kt++;
    }
    if (kt != 0)
    {
        cout << "\n Danh sach may tinh san xuat nam 2020 la: \n";
        for (int i = 0; i < n; i++)
        {
            if (a[i].nam == 2020)
            {
                cout << " + Ten may: " << a[i].tenmay << ", ma may: " << a[i].mamay;
            }
        }
    }
    else
        cout << "\n Khong co may nao san xuat nam 2020";
}
int main()
{
    int n;
    cout << " Nhap so may tinh can nhap thong tin: ";
    cin >> n;
    MayTinh *a = new MayTinh[n];
    Nhap(a, n);
    Xuat(a, n);
    nsxSAMSUNG(a, n);
    namsx2020(a, n);
}