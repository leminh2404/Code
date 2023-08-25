// 2+4+6+8+...+2n;
#include "iostream"
using namespace std;
int tong4(int n)
{
    if (n == 1) return 2;
    return 2*n + tong4(n-1);
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    cout << " Tong 4 = " << tong4(n);  
}