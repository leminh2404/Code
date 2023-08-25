/**/
#include "iostream"
#include "cmath"
#include "cstdlib"
#include "cstring"
using namespace std;
int main()
{
    string res = "";
    int T;
    do
    {
        cin >> T;
    } while (T > 10000 || T <= 0);
    long long *a = new long long[T];
    for (int i = 0; i < T; i++)
    {
        long long b;
        do
        {
            cin >> a[i];
        } while (a[i] > pow(10, 18));
        b = sqrt(a[i]);
        if (b * b == a[i])
            res += "YES\n";
        else
            res += "NO\n";
    }
    cout << res;
}