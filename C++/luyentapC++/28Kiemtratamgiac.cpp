#include "iostream"
using namespace std;
int main()
{
    int a, b, c;
    cout << "Nhap 3 canh cua tam giac: ";
A:
    cin >> a >> b >> c;
    if (a + b <= c || b + c <= a || c + a <= b)
        cout << "INVALID\n";
    else
    {
        if (a == b && b == c)
            cout << "DEU\n";
        else if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
            cout << "VUONG\n";
        else if (a == b || b == c || c == a)
            cout << "CAN\n";
        else if ((a * a + b * b == c * c && a == b) || (a * a + c * c == b * b && a == c) || (c * c + b * b == a * a && c == b))
            cout << "VUONG CAN\n";
        else
            cout << "THUONG\n";
    }
    goto A;
}