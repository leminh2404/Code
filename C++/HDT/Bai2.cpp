#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
class NGUOI
{
protected:
    string madd;
    string hoten;

public:
    NGUOI()
    {
        madd = "";
        hoten = "";
    }
    ~NGUOI()
    {
        madd = "";
        hoten = "";
    }
    void input();
    void output();
};
class NHANVIEN : public NGUOI
{
protected:
    int ns;
    int hsl;

public:
    static float tienpc;
    NHANVIEN()
    {
        ns = 0;
        hsl = 0;
    }
    void input();
    void output();
    float tinhluong();
    bool operator<(NHANVIEN);
};
void NGUOI::input()
{
    cout << "\n Nhap ma dinh danh: ";
    getline(cin, madd);
    cout << " Nhap ho ten: ";
    getline(cin, hoten);
}
void NGUOI::output()
{
    cout << "\n Ma dinh danh: " << madd << ", ho ten: " << hoten;
}
void NHANVIEN::input()
{
    cin.ignore();
    NGUOI::input();
    cout << " Nhap nam sinh: ";
    cin >> ns;
    cout << " Nhap he so luong: ";
    cin >> hsl;
}
void NHANVIEN::output()
{
    NGUOI::output();
    cout << ", nam sinh: " << ns << ", he so luong: " << hsl;
}
float NHANVIEN::tinhluong()
{
    return hsl * 1550 + tienpc;
}
bool NHANVIEN::operator<(NHANVIEN a)
{
    if (this->tinhluong() < a.tinhluong())
        return true;
    return false;
}
float NHANVIEN::tienpc = 1000000;
int main()
{
    NGUOI a;
    a.input();
    a.output();
    int n;
    cout << "\n Nhap n: ";
    cin >> n;
    NHANVIEN *b = new NHANVIEN[n];
    for (int i = 0; i < n; i++)
        b[i].input();
    for (int i = 0; i < n; i++)
        b[i].output();
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (b[i] < b[j])
                swap(b[i], b[j]);
    cout << "\n Danh sach nhan vien sau khi giam dan theo luong: ";
    for (int i = 0; i < n; i++)
        b[i].output();
}