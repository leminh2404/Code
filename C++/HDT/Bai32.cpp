#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
class DichVu
{
private:
    string madv;
    string tendv;
    float gc;

public:
    void input();
    void output();
    DichVu(){};
    ~DichVu(){};
    float gia()
    {
        return gc;
    }
};
void DichVu::input()
{
    cout << "=====" << endl;
    cout << " Nhap ma dich vu: ";
    getline(cin,madv);
    cout << " Nhap ten dich vu: ";
    
}