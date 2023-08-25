#include "iostream"
#include "cstdlib"
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n <= 0 || n > 10000);
    int *a = new int[n];
    int max = INT_MIN, p;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= max)
        {
            max = a[i];
            p = i;
        }
    }
    cout << max << " " << p + 1;
}