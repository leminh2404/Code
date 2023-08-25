#include "iostream"
using namespace std;
int chanle(long long n)
{
    if (n > 0)
    {
        if (n % 2 == 0)
            return 1;
        if (n % 2 == 1)
            return 0;
    }
    else
    {
        if (-1 * n % 2 == 0)
            return 1;
        if (-1 * n % 2 == 1)
            return 0;
    }
}
int main()
{
    long long a, b;
    cin >> a >> b;
    if (chanle(a) == 1 && chanle(b) == 1)
        cout << "1";
    else if (chanle(a) == 0 && chanle(b) == 0)
        cout << "1";
    else
        cout << "0";
}