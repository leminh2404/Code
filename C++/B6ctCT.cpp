#include "bits/stdc++.h"
#include "string.h"
#include "stdlib.h"
#include "conio.h"
using namespace std;
typedef struct
{
    char hvt[20];
    char sbd[10];
    int ngay, thang, nam;
    char qq[20];
    float tongdiem;
} ThiSinh;
void Nhap(ThiSinh a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap ho va ten thi sinh thu " << i + 1 << ": ";
        fflush(stdin);
        gets((a + i)->hvt);
        cout << " Nhap so bao danh: ";
        fflush(stdin);
        gets((a + i)->sbd);
        cout << " Nhap ngay sinh: ";
        cin >> (a + i)->ngay;
        cout << " Nhap thang sinh: ";
        cin >> (a + i)->thang;
        cout << " Nhap nam sinh: ";
        cin >> (a + i)->nam;
        cout << " Nhap que quan: ";
        fflush(stdin);
        gets((a + i)->qq);
        cout << " Nhap tong diem: ";
        cin >> (a + i)->tongdiem;
    }
}
void Xuat(ThiSinh a[], int n)
{
    cout << "\n Danh sach thi sinh vua nhap la: \n";
    for (int i = 0; i < n; i++)
    {
        cout << " + Ho va ten: " << ((a + i)->hvt) << ", so bao danh: " << ((a + i)->sbd) << ", ngay sinh: " << ((a + i)->ngay) << "/" << ((a + i)->thang) << "/" << ((a + i)->nam) << ", que quan: " << ((a + i)->qq) << ", tong diem: " << ((a + i)->tongdiem);
    }
}
void qqHaNoi(ThiSinh a[], int n)
{
    int kt = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(((a + i)->qq), "Ha Noi") == 0)
            kt++;
    }
    if (kt != 0)
    {
        cout << "\n Danh sach thi sinh que o Ha Noi la:\n";
        for (int i = 0; i < n; i++)
        {
            if (strcmp(((a + i)->qq), "Ha Noi") == 0)
            {
                cout << " + Ho va ten: " << ((a + i)->hvt) << ", so bao danh: " << ((a + i)->sbd) << ", ngay sinh: " << ((a + i)->ngay) << "/" << ((a + i)->thang) << "/" << ((a + i)->nam);
            }
        }
    }
    else
        cout << "\n Khong co thi sinh nao o Ha Noi";
}
void ns2002(ThiSinh a[], int n)
{
    int kt = 0;
    for (int i = 0; i < n; i++)
    {
        if (((a + i)->nam) == 2002)
            kt++;
    }
    if (kt != 0)
    {
        cout << "\n Danh sach thi sinh sinh nam 2002 la:\n";
        for (int i = 0; i < n; i++)
        {
            if (((a + i)->nam) == 2002)
            {
                cout << " + Ho va ten: " << ((a + i)->hvt) << ", so bao danh: " << ((a + i)->sbd) << ", ngay sinh: " << ((a + i)->ngay) << "/" << ((a + i)->thang) << "/" << ((a + i)->nam);
            }
        }
    }
    else
        cout << "\n Khong co thi sinh nao sinh nam 2002";
}
void Xuatfile(ThiSinh *a, int n)
{
    FILE *pt;
    pt = fopen("mangct.txt", "w");
    fprintf(pt, " Thi sinh vua nhap: \n");
    for (int i = 0; i < n; i++)
    {
        fprintf(pt, "\n");
        fprintf(pt, " + Ho va ten: " << a[i].hvt << ", so bao danh: " << a[i].sbd << ", ngay sinh: " << a[i].ngay << "/" << a[i].thang << "/" << a[i].nam);
    }
    fclose(pt);
}
int main()
{
    int n;
    cout << " Nhap so thi sinh can nhap thong tin: ";
    cin >> n;
    ThiSinh *a = new ThiSinh[n];
    Nhap(a, n);
    Xuat(a, n);
    qqHaNoi(a, n);
    ns2002(a, n);
    Xuatfile(a, n);
    getch();
}