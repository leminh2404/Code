#include "iostream"
#include "conio.h"
using namespace std;

class monhoc
{
private:
    int mamh;
    char tenmh[30];
    float dtb;
    int sotc;

public:
    monhoc()
    {
        int mamh = 0;
        char tenmh[30];
        float dtb = 0;
        int sotc = 0;
    };
    ~monhoc()
    {
        int mamh = 0;
        char tenmh[30];
        float dtb = 0;
        int sotc = 0;
    };
    void nhap1();
    void xuat1();
    tinchi()
    {
        return sotc;
    };
    DTB()
    {
        return dtb;
    };
};
void monhoc::nhap1()
{
    cout << "Nhap ma mon hoc: ";
    cin >> mamh;
    cout << "Nhap ten mon hoc: ";
    cin.ignore();
    cin.getline(tenmh, 30);
    cout << "Nhap diem TB: ";
    cin >> dtb;
    cout << "Nhap so tc: ";
    cin >> sotc;
}
void monhoc::xuat1()
{
    cout << "Ma mon hoc la: " << mamh << endl;
    cout << "Ten mon hoc la: " << tenmh << endl;
    cout << "Diem tb la: " << dtb << endl;
    cout << "So tc  la: " << sotc << endl;
}
class sinhvien : public monhoc
{
private:
    int masv;
    char tensv[30];
    int somh;
    monhoc arr[100];

public:
    sinhvien()
    {
        int masv = 0;
        char tensv[30];
        int somh = 0;
        monhoc arr[100];
    };
    ~sinhvien()
    {
        int masv = 0;
        char tensv[30];
        int somh = 0;
        monhoc arr[100];
    };
    void nhap2();
    void xuat2();
    float dtk();
};
void sinhvien::nhap2()
{
    cout << "Nhap ma sinh vien: ";
    cin >> masv;
    cout << "Nhap ten sv:";
    cin.ignore();
    cin.getline(tensv, 30);
    cout << "Nhap so luong mon hoc: ";
    cin >> somh;
    for (int i = 0; i < somh; i++)
    {
        arr[i].monhoc::nhap1();
    }
}
void sinhvien::xuat2()
{
    cout << " Ma sinh vien la: " << masv << endl;
    cout << " Ten sv la: " << tensv << endl;
    cout << " So luong mon hoc la: " << somh << endl;
    for (int i = 0; i < somh; i++)
    {
        arr[i].monhoc::xuat1();
    }
}
float sinhvien::dtk()
{
    float dtk1 = 0;
    float tongdiem;
    int tongtc = 0;
    for (int i = 0; i < somh; i++)
    {
        tongtc += arr[i].tinchi();
    }
    for (int i = 0; i < somh; i++)
    {
        tongdiem += arr[i].DTB() * arr[i].tinchi();
    }
    dtk1 = tongdiem / tongtc;
    return dtk1;
}
int main()
{
    // câu12
    monhoc x;
    x.nhap1();
    cout << " MON HOC VUA NHAP LA:" << endl;
    x.xuat1();
    sinhvien a[100];
    int n, i;
    cout << " Nhap so sinh vien n = ";
    cin >> n;
    // cau34
    for (i = 0; i < n; i++)
    {
        cout << " Sinh vien thu " << i + 1 << endl;
        a[i].nhap2();
    }
    cout << " DANH SACH SINH VIEN LA: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << " Sinh vien thu " << i + 1 << endl;
        a[i].xuat2();
        cout << " Diem tong ket la:" << a[i].dtk();
    }
    // cau5
    cout << " DANH SACH SINH VIEN DC HOC BONG LA: ";
    for (i = 0; i < n; i++)
    {
        if (a[i].dtk() >= 8.5)
        {
            cout << " Sinh vien thu " << i + 1 << endl;
            a[i].xuat2();
        }
    }
    getch();
}