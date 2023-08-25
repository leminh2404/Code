#include "iostream"
#include "cstring"
using namespace std;
int main()
{
    string s;
    int T;
    do
        cin >> T;
    while (T > 10000);
    long long *a = new long long[T];
    for (int i = 0; i < T; i++)
    {
        do
            cin >> a[i];
        while (a[i] > 1000000000 || a[i] <= 0);
        a[i] = (a[i] + 1) * a[i] / 2;
        if (i == T - 1)
            s += to_string(a[i]);
        else
        {
            s += to_string(a[i]);
            s += '\n';
        }
    }
    cout << s;
}