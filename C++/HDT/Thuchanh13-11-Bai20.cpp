#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
class DATE
{
protected:
    int ngay, thang, nam;

public:
    DATE()
    {
        ngay = 0;
        thang = 0;
        nam = 0;
    }
    void input();
    void output();
};
class CANBO : public DATE
{
protected:
    string macanbo;
    string tencanbo;
    float luongcb;

public:
    static float tienpc;
    CANBO()
    {
        macanbo = "";
        tencanbo = "";
        luongcb = 0;
    }
    void input();
    void output();
    float tinhluong();
};
void DATE::input()
{
    cout << " Nhap ngay: ";
    cin >> ngay;
    cout << " Nhap thang: ";
    cin >> thang;
    cout << " Nhap nam: ";
    cin >> nam;
}
void DATE::output()
{
    cout << ngay << "/" << thang << "/" << nam;
}
void CANBO::input()
{
    cin.ignore();
    cout << "\n Nhap ma can bo: ";
    getline(cin, macanbo);
    cout << " Nhap ten can bo: ";
    getline(cin, tencanbo);
    DATE::input();
    cout << " Nhap luong co ban: ";
    cin >> luongcb;
}
void CANBO::output()
{
    cout << "\n Ma can bo: " << macanbo << ", ten can bo: " << tencanbo;
    DATE::output();
    cout << ", luong co ban: " << luongcb;
}
float CANBO::tienpc = 2000000;
float CANBO::tinhluong()
{
    return luongcb + tienpc;
}
int main()
{
    DATE a;
    a.input();
    a.output();
    int n;
    cout << "\n Nhap n: ";
    cin >> n;
    CANBO *b = new CANBO[n];
    for (int i = 0; i < n; i++)
        b[i].input();
    for (int i = 0; i < n; i++)
        b[i].output();
    int j;
    float min = b[0].tinhluong();
    cout << "\n Can bo co luong thap nhat: ";
    for (int i = 1; i < n; i++)
        if (b[i].tinhluong() < min)
        {
            j = i;
            min = b[i].tinhluong();
        }
    b[j].output();
}
