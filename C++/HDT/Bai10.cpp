#include "iostream"
#include "cstring"
#include "cstdlib"
#include "iomanip"
#define for for (int i = 0; i < n; i++)
using namespace std;
class Nguoi
{
protected:
    string hoten;
    string gioitinh;
    int namsinh;

public:
    Nguoi()
    {
        hoten = " ";
        gioitinh = " ";
        namsinh = 0;
    }
    ~Nguoi()
    {
        hoten = " ";
        gioitinh = " ";
        namsinh = 0;
    }
    void nhap();
    void xuat();
};
class NhanVien : public Nguoi
{
protected:
    float hstn;
    float luong;
    float tac;

public:
    NhanVien()
    {
        hoten = " ";
        gioitinh = " ";
        namsinh = 0;
        hstn = 0;
        luong = 0;
        tac = 0;
    }
    ~NhanVien()
    {
        hoten = " ";
        gioitinh = " ";
        namsinh = 0;
        hstn = 0;
        luong = 0;
        tac = 0;
    }
    void nhap();
    void xuat();
    void nvnh();
    void tlnv();
};
void Nguoi::nhap()
{
    cout << " Nhap ho ten: ";
    cin.ignore();
    getline(cin, hoten);
    cout << " Gioi tinh: ";
    getline(cin, gioitinh);
    cout << " Nhap nam sinh: ";
    cin >> namsinh;
}
void Nguoi::xuat()
{
    cout << "\n Ho ten: " << hoten << ", gioi tinh: " << gioitinh << ", nam sinh: " << namsinh;
}
void NhanVien::nhap()
{
    Nguoi::nhap();
    cout << " Nhap he so tham nien: ";
    cin >> hstn;
    cout << " Nhap muc luong: ";
    cin >> luong;
    cout << " Nhap tien an ca: ";
    cin >> tac;
}
void NhanVien::xuat()
{
    Nguoi::xuat();
    cout << ", he so tham nien: " << hstn << ", muc luong: " << luong << ", tien an ca: " << tac;
}
void NhanVien::nvnh()
{
    cout << "\n Thong tin cac nhan vien nghi huu:";
    if (2022 - namsinh >= 60)
        cout << "\n Ho ten: " << hoten << ", gioi tinh: " << gioitinh << ", nam sinh: "
             << namsinh << ", he so tham nien: " << hstn << ", muc luong: " << luong << ", tien an ca: " << tac;
}
void NhanVien::tlnv()
{
    cout << "\n Tinh luong nhan vien:";
    if (2022 - namsinh >= 60)
        cout << "\n Ho ten: " << hoten << ", luong: " << fixed << setprecision(0) << 0.75 * luong * hstn;
    else
        cout << "\n Ho ten: " << hoten << ", luong: " << fixed << setprecision(0) << luong * hstn * tac;
}
int main()
{
    Nguoi A;
    A.nhap();
    A.xuat();
    int n;
    cout << "\n Nhap n: ";
    cin >> n;
    NhanVien *a = new NhanVien[n];
    for
        a[i].nhap();
    for
        a[i].xuat();
    for
        a[i].tlnv();
    for
        a[i].nvnh();
}