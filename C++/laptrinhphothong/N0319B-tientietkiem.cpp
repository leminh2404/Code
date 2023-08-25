#include "iostream"
using namespace std;
int main()
{
    int n;
    do
        cin >> n;
    while (n <= 0 || n >= 30);
    int T = 2000, S = 2000, s;
    for (int i = 1; i < n; i++)
    {
        s = (i + 2) * 1000;
        S += s;
        T += S;
    }
    cout << S;
}