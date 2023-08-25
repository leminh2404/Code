// -1+2-3+4-5+6-...+(-1)^n.n
#include "iostream"
#include "cmath"
using namespace std;
int tong5(int n)
{
    if (n == 1) return -1;
    return pow(-1,n)*n + tong5(n-1);
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    cout << " Tong 5 = " << tong5(n);
}