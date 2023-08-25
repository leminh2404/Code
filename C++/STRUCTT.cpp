#include "iostream"
#include "cstdlib"
using namespace std;
typedef struct sinhvien
{
    char hoten[20];
    char masv[10];
} SV;
int main()
{
    SV a;
    cout << " Nhap ho ten: ";
    fflush(stdin);
    gets(a.hoten);
    cout << " Nhap ma sinh vien: ";
    fflush(stdin);
    gets(a.masv);
    cout << " Ho ten: " << a.hoten << ", ma sinh vien: " << a.masv;
    SV b = a;
    cout << "\n Ho ten: " << b.hoten << ", ma sinh vien: " << b.masv;
}