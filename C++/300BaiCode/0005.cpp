#include "iostream"
#include "iomanip"
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << (float)(a + b + c) / 3;
}