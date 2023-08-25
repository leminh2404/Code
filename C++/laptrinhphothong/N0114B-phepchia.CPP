#include "iostream"
#include "cmath"
#include "iomanip"
using namespace std;
int main()
{
    double a, b;
    do
    {
        cin >> a >> b;
    } while (a <= 0 || b <= 0 || a > pow(10, 9) || b > pow(10, 9));
    double c = (a / b);
    cout << (int)(a / b) << "\n"
         << (int)a % (int)b << "\n"
         << fixed << setprecision(2) << c;
}