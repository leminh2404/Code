#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
class PHUONGTIENGIAOTHONG
{
protected:
    string hangsx;
    string tenpt;
    int namsx;
    float vttd;

public:
    PHUONGTIENGIAOTHONG()
    {
        hangsx = " ";
        tenpt = " ";
        namsx = 0;
        vttd = 0;
    }
    void input();
    void output();
};
class OTO : public PHUONGTIENGIAOTHONG
{
protected:
    int socho;
    string kieudc;

public:
    OTO()
    {
        socho = 0;
        kieudc = " ";
    }
    ~OTO()
    {
        socho = 0;
        kieudc = " ";
    }
    void input();
    void output();
    float vtcs();
    string hang();
};
void PHUONGTIENGIAOTHONG::input()
{
    cout << "\n Nhap hang san xuat: ";
    getline(cin, hangsx);
    cout << " Nhap ten phuong tien: ";
    getline(cin, tenpt);
    cout << " Nhap nam san xuat: ";
    cin >> namsx;
    cout << " Nhap van toc toi da: ";
    cin >> vttd;
}
void PHUONGTIENGIAOTHONG::output()
{
    cout << "\n Hang san xuat: " << hangsx << ", ten phuong tien: " << tenpt << ", nam san xuat: " << namsx << ", van toc toi da: " << vttd;
}
void OTO::input()
{
    PHUONGTIENGIAOTHONG::input();
    cout << " Nhap so cho: ";
    cin >> socho;
    cout << " Nhap kieu dong co: ";
    cin.ignore();
    getline(cin, kieudc);
}
void OTO::output()
{
    PHUONGTIENGIAOTHONG::output();
    cout << ", so cho: " << socho << ", kieu dong co: " << kieudc;
}
string OTO::hang()
{
    return hangsx;
}
float OTO::vtcs()
{
    return vttd / 4;
}
int main()
{
    PHUONGTIENGIAOTHONG a;
    a.input();
    a.output();
    int n;
    cout << "\n Nhap n: ";
    cin >> n;
    OTO *b = new OTO[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
        b[i].input();
    for (int i = 0; i < n; i++)
    {
        b[i].output();
        cout << "Van toc co so: " << b[i].vtcs();
    }
    cout << "\n Thong tin oto hang HONDA: ";
    for (int i = 0; i < n; i++)
        if (b[i].hang() == "HONDA")
            b[i].output();
}