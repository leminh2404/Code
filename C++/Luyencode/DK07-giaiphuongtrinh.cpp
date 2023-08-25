#include "iostream"
#include "iomanip"
#include "cmath"
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (c == 0)
        cout << "0";
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << "-1";
        else if (delta == 0)
            cout << "3";
        else
        {
            float d = (-b + sqrt(delta)) / (2 * a);
            float e = (-b - sqrt(delta)) / (2 * a);
            if (d > 0 && e > 0 || d < 0 && e < 0)
                cout << "1";
            else if (d < 0 && e > 0 || d > 0 || e < 0)
                cout << "2";
        }
    }
}