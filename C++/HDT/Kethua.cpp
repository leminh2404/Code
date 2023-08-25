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
        SV() {
            this->masv = " ";
            this->hoten = " ";
        }
        ~SV() {
            this->masv = " ";
            this->hoten = " ";
        }
        friend void nhap(SV&);
        friend void xuat(SV);
};
class SVAI : public SV
{
    protected:
        float dtb;

    public:
        SVAI() {
            this->dtb = 0;
        }
        ~SVAI() {
            this->dtb = 0;
        }
        friend void in(SVAI&);
        friend void out(SVAI);
        bool operator<(SVAI a);
};
void nhap(SV& a)
{
    cout << "\n Nhap ma sinh vien: ";
    fflush(stdin);
    getline(cin, a.masv);
    cout << " Nhap ho ten: ";
    fflush(stdin);
    getline(cin, a.hoten);
}
void xuat(SV a)
{
    cout << "\n Ma sinh vien: " << a.masv << ", ho ten: " << a.hoten;
}
void in(SVAI& a)
{
    nhap(a);
    cout << "\n Nhap diem trung binh: ";
    cin >> a.dtb;
}
void out(SVAI a)
{
    xuat(a);
    cout << ", diem trung binh: " << a.dtb;
}
bool SVAI::operator<(SVAI a)
{
    if (this->dtb < a.dtb)
        return true;
    return false;
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    SV* a = new SV[n];
    for (int i = 0; i < n; i++)
    {
        nhap(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        xuat(a[i]);
    }
    SVAI* b = new SVAI[n];
    for (int i = 0; i < n; i++)
    {
        in(b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        out(b[i]);
    }
    SVAI t;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] < b[j])
                swap(b[i], b[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        out(b[i]);
    }
}