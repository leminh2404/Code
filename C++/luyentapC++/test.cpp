#include "iostream"
#include "cstring"
#include "iomanip"
using namespace std;
int main()
{
    float a, b;
    string s;
    do
        cin >> a;
    while (a < -10000 || a > 10000);
    cin.ignore();
    do
        cin >> s;
    while (s != "+" && s != "-" && s != "*" && s != "/");
    do
        cin >> b;
    while (b < -10000 || b > 10000);
    if (s == "+")
        cout << fixed << setprecision(2) << a + b;
    if (s == "-")
        cout << fixed << setprecision(2) << a - b;
    if (s == "*")
        cout << fixed << setprecision(2) << a * b;
    if (s == "/")
    {
        if (b == 0)
            cout << "Math Error";
        else
            cout << fixed << setprecision(2) << a / b;
    }
}