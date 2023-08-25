#include "iostream"
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n <= 0 || n > 1000000);
    long long *a = new long long[n];
    long long res = 0, t = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        do
        {
            cin >> a[i];
        } while (a[i] < LLONG_MIN || a[i] > LLONG_MAX);
        if (i < 1)
        {
            if (a[i] < 0)
                break;
        }
        else
        {
            if (a[i] < 0 && a[i - 1] > 0 && i < t)
            {
                t = i;
                res = a[i - 1];
                break;
            }
        }
    }
    cout << res;
}
/**/