#include "iostream"
#include "vector"
#include "cstring"
using namespace std;
typedef struct Nhanvien
{
    string manv;
    string hoten;
    string qq;
    int hsl;
    const int lcs = 1500000;
    friend istream &operator>>(istream &, struct Nhanvien &);
    friend ostream &operator<<(ostream &, struct Nhanvien);
    void del();
} NV;
istream &operator>>(istream &in, NV &a)
{
    cout << " Nhap ma nhan vien: ";
    in.ignore();
    getline(in, a.manv);
    cout << " Nhap ho ten: ";
    getline(in, a.hoten);
    cout << " Nhap que quan: ";
    getline(in, a.qq);
    cout << " Nhap he so luong: ";
    cin >> a.hsl;
    return in;
}
ostream &operator<<(ostream &out, NV a)
{
    out << "\n+ Ma nhan vien: " << a.manv;
    out << "\n+ Ho ten: " << a.hoten;
    out << "\n+ Que quan: " << a.qq;
    out << "\n+ He so luong: " << a.hsl;
    out << "\n+ Luong co so: " << a.lcs;
    return out;
}
int check(vector<NV> QLNV, string s)
{
    for (int i = 0; i < QLNV.size(); i++)
        if (QLNV[i].manv == s)
            return 1;
    return 0;
}
void NV::del()
{
    if (check(, s) == 1)
        for (int i = 0; i < QLNV.size(); i++)
            if (QLNV[i].manv == s)
                delete QLNV[i];
    if (check(QLNV, s) == 0)
        cout << "Khong tim thay nhan vien co ma vua nhap!";
}
int main()
{
    vector<NV> QLNV;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    NV a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        QLNV.push_back(a);
    }
    cout << " Thong tin nhan vien:";
    for (int i = 0; i < QLNV.size(); i++)
    {
        cout << "\n****" << i + 1 << "****";
        cout << QLNV[i];
    }
    string s;
    cout << "\n Nhap ma cua nhan vien muon xoa: ";
    getline(cin, s);
    for (int i = 0; i < QLNV.size; i++)
        QLNV[i].del();
}