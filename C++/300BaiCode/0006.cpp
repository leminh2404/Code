#include "iostream"
#include "iomanip"
#include "cmath"
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    float cv = a + b + c;
    float p = cv / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(1) << cv << " " << fixed << setprecision(3) << s;
}