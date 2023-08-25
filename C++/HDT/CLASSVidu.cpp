#include "iostream"
#include "iomanip"
#include "cstring"
using namespace std;
class sinhvien
{
private:
    int masv;
    string hoten;

public:
    void setMasv(int masv)
    {
        this->masv = masv;
    }
    int getMasv()
    {
        return masv;
    }
    sinhvien()
    {
        masv = 0;
        hoten = " ";
    }
    ~sinhvien()
    {
        masv = 0;
        hoten = " ";
    }
    void input();
    void output();
};
void sinhvien::input()
{
    cout << " Nhap ma: ";
    cin >> masv;
    cout << " Nhap ten: ";
    cin.ignore();
    getline(cin, hoten);
}
void sinhvien::output()
{
    cout << masv;
    cout << setw(15) << hoten;
}
int main()
{
    sinhvien sv;
    int a;
    cout << " Nhap ma sinh vien:\n";
    cin >> a;
    sv.setMasv(a);
    sv.output();
    system("pause");
}