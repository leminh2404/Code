// Tính S ( n ) = x + x ^ 2 / 1 + 2 + x ^ 3 / 1 + 2 + 3 + ... + x ^ n / 1 + 2 + 3 + ... + N
#include "iostream"
#include "cmath"
using namespace std;
float tong(int n)
{
    if (n == 1)
        return 1;
    return n + tong(n - 1);
}
void in(int n)
{
    int S;
    if (n == 1)
        cout << " 1";
    for (int i = 0; i < n; i++)
    {
        S = tong(n);
        n--;
    }
    cout << S;
}
float tinhtong(int x, int n)
{
    float S = 0;
    if (n == 1)
        return x;
    for (int i = 0; i < n; i++)
    {
        S = tinhtong(x, n) / tong(n);
        n--;
    }
    return S + pow(x, n) / tong(n);
}
int main()
{
    int x, n;
    cout << " Nhap x: ";
    cin >> x;
    cout << " Nhap n: ";
    cin >> n;
    cout << " Tong = " << tinhtong(x, n) << endl;
    in(n);
}