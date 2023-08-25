#include "iostream"
using namespace std;
int main()
{
    float n;
    do
        cin >> n;
    while (n < 2);
    float s = (n - 2) / 3 + 1;
    if (s == (int)s)
        cout << (n + 2) * s / 2;
    else
        cout << "NO";
}