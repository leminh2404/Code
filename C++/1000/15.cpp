#include "iostream"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = 1;
    float S = 1;
    int i = 0, s = 1;
    while (max + 1 <= n)
    {
        s += (max + 1);
        S += (float)1 / s;
        max++;
    }
    cout << S;
}