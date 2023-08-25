#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
class MonHoc
{
protected:
    string mamh;
    string tenmh;
    float dtb;
    int stc;

public:
    int tc()
    {
        return stc;
    }
    float d()
    {
        return dtb;
    }
    void input();
    void output();
};
void MonHoc::input()
{
    cout << " Nhap ma mon hoc: ";
    getline(cin, mamh);
    cout << " Nhap ten mon hoc: ";
    getline(cin, tenmh);
    cout << " Nhap diem trung binh: ";
    cin >> dtb;
    cout << " Nhap so tin chi: ";
    cin >> stc;
}
void MonHoc::output()
{
    cout << "====>" << endl;
    cout << "+ Ma mon hoc: " << mamh << endl;
    cout << "+ Ten mon hoc: " << tenmh << endl;
    cout << "+ Diem trung binh: " << dtb << endl;
    cout << "+ So tin chi: " << stc << endl;
}
class SinhVien : public MonHoc
{
protected:
    string masv;
    string tensv;
    int somh;
    MonHoc a[100];

public:
    void nhap();
    void xuat();
    float dtk();
};
void SinhVien::nhap()
{
    cin.ignore();
    cout << " Nhap ma sinh vien: ";
    getline(cin, masv);
    cout << " Nhap ten sinh vien: ";
    getline(cin, tensv);
    cout << " Nhap so mon hoc: ";
    cin >> somh;
    for (int i = 0; i < somh; i++)
    {
        cin.ignore();
        cout << "=+=+= Nhap mon hoc thu " << i + 1 << ": ";
        a[i].MonHoc::input();
    }
}
void SinhVien::xuat()
{
    cout << "======>" << endl;
    cout << " Ma sinh vien: " << masv << endl;
    cout << " Ten sinh vien: " << tensv << endl;
    for (int i = 0; i < somh; i++)
    {
        cout << "==> Thong tin mon hoc thu " << i + 1 << ": ";
        a[i].MonHoc::output();
    }
}
float SinhVien::dtk()
{
    float T = 0;
    int t = 0;
    for (int i = 0; i < somh; i++)
    {
        T += a[i].d() * a[i].tc();
        t += a[i].tc();
    }
    return T / t;
}
int main()
{
    MonHoc b;
    b.input();
    b.output();
    int n;
    cout << " Nhap n: ";
    cin >> n;
    SinhVien *c = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        c[i].nhap();
    }
    for (int i = 0; i < n; i++)
    {
        c[i].xuat();
        cout << "+ Diem tong ket: " << c[i].dtk() << endl;
    }
    cout << " Thong tin sinh vien duoc hoc bong: ";
    for (int i = 0; i < n; i++)
    {
        if (c[i].dtk() >= 8.5)
            c[i].xuat();
    }
    system("pause");
}
