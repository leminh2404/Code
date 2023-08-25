// Chuyen doi so ngay sang so nam ,so tuan, so ngay
#include "iostream"
using namespace std;
int main()
{
    int n;
    cout << "Nhap so ngay: ";
    cin >> n;
    cout << n / 365 << " nam, " << ((n % 365) / 7) << " tuan, " << n - (n / 365) * 365 - ((n % 365) / 7) * 7 << " ngay" << endl;
}