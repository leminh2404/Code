#include "iostream"
using namespace std;
long double tongbp(int n)
{
    if(n == 1) return 1;
    return n*n + tongbp(n-1);
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    cout << " Tong binh phuong = " << tongbp(n);
}