#include "iostream"
#include "cstring"
#define for for (int i = 0; i < n; i++)
using namespace std;
class SV
{
private:
    string masv, hoten;

public:
    friend istream &operator>>(istream &in, SV &);
    friend ostream &operator<<(ostream &out, SV);
};
istream &operator>>(istream &in, SV &a)
{
    cout << " Nhap ho va ten: ";
    getline(in, a.hoten);
    cout << " Nhap ma sv: ";
    in >> a.masv;
    cin.ignore();
    return in;
}
ostream &operator<<(ostream &out, SV a)
{
    out << " Ho va ten: " << a.hoten << ", ma sv: " << a.masv << endl;
    return out;
}
class SVAI : public SV
{
protected:
    string masv, hoten;
    float diem;

public:
    friend istream &operator>>(istream &in, SVTMDT &);
    friend ostream &operator<<(ostream &out, SVTMDT);
};
istream &operator>>(istream &in, SVTMDT &a)
{
    cin.ignore();
    cout << " Nhap ho ten: ";
    getline(in, a.hoten);
    cout << " Nhap ma sv: ";
    in >> a.masv;
    cin.ignore();
    cout << " Nhap diem: ";
    in >> a.diem;
    return in;
}
ostream &operator<<(ostream &out, SVTMDT a)
{
    out << " Ho va ten: " << a.hoten << ", ma sv: " << a.masv << ", diem: " << a.diem << endl;
    return out;
}
int main()
{
    SV a;
    cin >> a;
    cout << a;
    int n;
    cout << " Nhap so luong sinh vien: ";
    cin >> n;
    SVAI *b = new SVAI[n];
    for
        cin >> b[i];
    for
        cout << b[i];
}