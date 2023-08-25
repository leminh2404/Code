#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
class HANGHOA
{
protected:
    string mahang;
    string tenhang;

public:
    HANGHOA()
    {
        this->mahang = " ";
        this->tenhang = " ";
    }
    ~HANGHOA(){};
    void input();
    void output();
};
class MAYTINH : public HANGHOA
{
protected:
    string nhasx;
    int namsx;
    float gia;

public:
    static float tlkm;
    MAYTINH()
    {
        nhasx = " ";
        namsx = 0;
        gia = 0;
    }
    void input();
    void output();
    float giabanthucte();
    string nsx();
};
void HANGHOA::input()
{
    cout << "\n Nhap ma hang: ";
    getline(cin, mahang);
    cout << " Nhap ten hang: ";
    getline(cin, tenhang);
}
void HANGHOA::output()
{
    cout << "\n Ma hang: " << mahang << ", ten hang: " << tenhang;
}
void MAYTINH::input()
{
    cin.ignore();
    HANGHOA::input();
    cout << " Nhap nha san xuat: ";
    getline(cin, nhasx);
    cout << " Nhap nam san xuat: ";
    cin >> namsx;
    cout << " Nhap gia thanh: ";
    cin >> gia;
}
void MAYTINH::output()
{
    HANGHOA::output();
    cout << ", nha san xuat: " << nhasx << ", nam san xuat: " << namsx << ", gia thanh: " << gia;
}
string MAYTINH::nsx()
{
    return nhasx;
}
float MAYTINH::giabanthucte()
{
    return gia - gia * tlkm;
}
float MAYTINH::tlkm = 0.3;
int main()
{
    HANGHOA a;
    a.input();
    a.output();
    int n;
    cout << "\n Nhap n: ";
    cin >> n;
    MAYTINH *b = new MAYTINH[n];
    for (int i = 0; i < n; i++)
        b[i].input();
    for (int i = 0; i < n; i++)
        b[i].output();
    cout << "\n Thong tin may tinh nha san xuat SAMSUNG: ";
    for (int i = 0; i < n; i++)
        if (b[i].nsx() == "SAMSUNG")
            b[i].output();
    float min = b[0].giabanthucte();
    int j;
    for (int i = 1; i < n; i++)
        if (b[i].giabanthucte() < min)
        {
            min = b[i].giabanthucte();
            j = i;
        }
    cout << "\n May tinh co gia ban thuc te thap nhat: ";
    b[j].output();
}