#include "iostream"
using namespace std;
int tong(int n)
{
    if (n == 0) return 0;
    else if (n == 1) return 1;
    return n + tong(n-1); 
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    cout << " Tong = " << tong(n);
}