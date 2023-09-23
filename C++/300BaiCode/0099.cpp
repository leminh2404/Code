#include "iostream"
#include "iomanip"
#include "cmath"
using namespace std;
bool check(int n)
{
    if ((float)sqrt(n) == (int)(sqrt(n)))
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int S = 0, cnt = 0;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (check(a[i]))
        {
            S += a[i];
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "-";
    else
        cout << fixed << setprecision(1) << (float)S / cnt;
}