#include "iostream"
#include "cstring"
#include "cstdlib"
#define for for (int i = 0; i < n; i++)
using namespace std;
class Media
{
protected:
    string tengoi;
    int giaban;

public:
    Media()
    {
        this->tengoi = " ";
        this->giaban = 0;
    }
    ~Media()
    {
        this->tengoi = " ";
        this->giaban = 0;
    }
    void nhap();
    void xuat();
};
class Book : public Media
{
protected:
    int sotrang;
    string tacgia;

public:
    void nhap();
    void xuat();
    void tttg();
};
void Media::nhap()
{
    cout << "\n Nhap ten goi: ";
    fflush(stdin);
    getline(cin, tengoi);
    cout << " Nhap gia ban: ";
    cin >> giaban;
}
void Media::xuat()
{
    cout << "\n Ten goi: " << tengoi << ", gia ban: " << giaban;
}
void Book::nhap()
{
    Media::nhap();
    cout << " Nhap so trang: ";
    cin >> sotrang;
    cout << " Nhap tac gia: ";
    cin.ignore();
    getline(cin, tacgia);
}
void Book::xuat()
{
    Media::xuat();
    cout << ", so trang: " << sotrang << ", tac gia: " << tacgia;
}
void Book::tttg()
{
    if (tacgia == "Nguyen Thanh Thuy")
        cout << "\n Ten goi: " << tengoi << ", gia ban: " << giaban << ", so trang: " << sotrang << ", tac gia: " << tacgia;
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    Book *a = new Book[n];
    Media *b = new Media[n];
    for
        b[i].nhap();
    for
        b[i].xuat();
    for
        a[i].nhap();
    for
        a[i].xuat();
    cout << " Thong tin sach cua tac gia Nguyen Thanh Thuy: ";
    for
        a[i].tttg();
    return 0;
}