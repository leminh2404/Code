// Tinh S = 1-1/(1^2+2^2)+1/(1^2+2^2+3^2)-...+(-1)^(n+1)/(1^2+2^2+3^2+...+n^2)
#include "iostream"
#include "cmath"
using namespace std;
int ms(int n)
{
    int s;
    if (n == 1)
        return 1;
    return s = pow(n, 2) + ms(n - 1);
}
float S(int n)
{
    float s;
    if (n == 1)
        return 1;
    return s = pow(-1, n + 1) / (ms(n)) + S(n - 1);
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    cout << S(n);
}