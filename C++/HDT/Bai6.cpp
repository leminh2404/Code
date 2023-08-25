#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
class SV
{
protected:
    string masv;
    string hoten;

public:
    SV()
    {
        masv = " ";
        hoten = " ";
    }
    ~SV()
    {
        masv = " ";
        hoten = " ";
    }
    void input();
    void output();
};
class SVSDH : public SV
{
protected:
    float hocphi;

public:
    SVSDH()
    {
        hocphi = 0;
    }
    ~SVSDH()
    {
        hocphi = 0;
    }
    void input();
    void output();
};
void SV::input()
{
    cout << " Nhap ma sinh vien: ";
    getline(cin, masv);
    cout << " Nhap ho ten: ";
    getline(cin, hoten);
}
void SV::output()
{
    cout << " Ma sinh vien: " <<
}