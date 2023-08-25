#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
class LOPHOC
{
protected:
    string malh;
    string tenlh;

public:
    LOPHOC()
    {
        malh = " ";
        tenlh = " ";
    }
    ~LOPHOC()
    {
        malh = " ";
        tenlh = " ";
    }
    void input();
    void output();
};
class GIANGDAY : public LOPHOC
{
protected:
    string magv;
    string mamh;
    int sotc;

public:
    static int stgd;
    GIANGDAY()
    {
        magv = " ";
        mamh = " ";
        sotc = 0;
    }
    ~GIANGDAY()
    {
        magv = " ";
        mamh = " ";
        sotc = 0;
    }
    void nhap();
    void xuat();
    void tc3();
    int stc();
    int st();
};
void LOPHOC::input()
{
    cin.ignore();
    cout << " Nhap ma lop hoc: ";
    getline(cin, malh);
    cout << " Nhap ten lop hoc: ";
    getline(cin, tenlh);
}
void LOPHOC::output()
{
    cout << "\n Ma lop hoc: " << malh << ", ten lop hoc: " << tenlh;
}
void GIANGDAY::nhap()
{
    cout << " Nhap ma lop hoc: ";
    getline(cin, malh);
    cout << " Nhap ten lop hoc: ";
    getline(cin, tenlh);
    cout << " Nhap ma giang vien: ";
    getline(cin, magv);
    cout << " Nhap ma mon hoc: ";
    getline(cin, mamh);
    cout << " Nhap so tin chi: ";
    cin >> sotc;
}
void GIANGDAY::xuat()
{
    cout << ", ma giang vien: " << magv << ", ma mon hoc: " << mamh << ", so tin chi: " << sotc << ", so tiet giang day: " << stgd << endl;
    cout << ", ma lop hoc: " << malh << ", ten lop hoc: " << tenlh;
}
int GIANGDAY::stc()
{
    return sotc;
}
int GIANGDAY::st()
{
    return stgd;
}
int GIANGDAY::stgd = 30;
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    GIANGDAY *b = new GIANGDAY[n];
    for (int i = 0; i < n; i++)
    {
        b[i].input();
        b[i].stgd += 10;
    }
    for (int i = 0; i < n; i++)
        b[i].output();
    int min = INT_MAX, j;
    for (int i = 0; i < n; i++)
    {
        if (b[i].stc() * 15 - b[i].st() < min)
        {
            min = b[i].stc() * 15 - b[i].st();
            j = i;
        }
    }
    cout << "\n Thong tin lop hoc co so tiet con lai thap nhat:";
    b[j].output();
}