#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    double n;
    cin >> n;
    if (sqrt(n) == (int)sqrt(n))
        cout << "YES";
    else
        cout << "NO";
}