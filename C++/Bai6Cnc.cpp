#include "bits/stdc++.h"
#include "string.h"
#include "stdlib.h"
using namespace std;
typedef struct
{
    char sbd[15];
    char hovaten[20];
    int ngay, thang, nam;
    char quequan[15];
    float td;
} ThiSinh;
void Nhap(ThiSinh *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap ten cua thi sinh thu " << i + 1 << ": ";
        fflush(stdin);
        gets(a[i].hovaten);
        cout << " Nhap so bao danh cua thi sinh thu " << i + 1 << ": ";
        fflush(stdin);
        gets(a[i].sbd);
        cout << " Nhap ngay sinh cua thi sinh: ";
        cin >> a[i].ngay;
        cout << " Nhap thang sinh cua thi sinh: ";
        cin >> a[i].thang;
        cout << " Nhap nam sinh cua thi sinh: ";
        cin >> a[i].nam;
        cout << " Nhap que quan cua thi sinh: ";
        fflush(stdin);
        gets(a[i].quequan);
        cout << " Nhap tong diem cua thi sinh: ";
        cin >> a[i].td;
    }
}
void Xuat(ThiSinh *a, int n)
{
    cout << " Danh sach thi sinh vua nhap: \n";
    for (int i = 0; i < n; i++)
    {
        cout << " + Ten cua thi sinh thu " << i + 1 << " la " << a[i].hovaten << ", so bao danh: " << a[i].sbd << ", ngay sinh la " << a[i].ngay << "/" << a[i].thang << "/" << a[i].nam << ", que quan: " << a[i].quequan << ", tong diem la " << a[i].td << endl;
    }
}
void queHN(ThiSinh *a, int n)
{
    int kt = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].quequan, "Ha Noi") == 0)
            kt++;
    }
    if (kt != 0)
    {
        cout << " Danh sach thi sinh o Ha Noi la: \n";
        for (int i = 0; i < n; i++)
        {
            if (strcmp(a[i].quequan, "Ha Noi") == 0)
            {
                cout << " + Ho va ten: " << a[i].hovaten << ", SBD: " << a[i].sbd << ", ngay sinh: " << a[i].ngay << "/" << a[i].thang << "/" << a[i].nam << endl;
            }
        }
    }
    else
        cout << " Khong co thi sinh nao o Ha Noi";
}
void ns2002(ThiSinh *a, int n)
{
    int kt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].nam == 2020)
            kt++;
    }
    if (kt != 0)
    {
        cout << "\n Danh sach thi sinh sinh nam 2002 la: \n";
        for (int i = 0; i < n; i++)
        {
            if (a[i].nam == 2002)
            {
                cout << " + Ho va ten: " << a[i].hovaten << ", SBD: " << a[i].sbd << ", ngay sinh: " << a[i].ngay << "/" << a[i].thang << "/" << a[i].nam << endl;
            }
        }
    }
    else
        cout << "\n Khong co thi sinh nao sinh nam 2002";
}
int main()
{
    int n;
    cout << " Nhap so luong thi sinh can nhap thong tin: ";
    cin >> n;
    ThiSinh *a = new ThiSinh[n];
    Nhap(a, n);
    Xuat(a, n);
    queHN(a, n);
    ns2002(a, n);
}
