#include "iostream"
#include "cstdlib"
using namespace std;
int main()
{
    int n, pos;
    do
        cin >> n;
    while (n <= 0 || n > 1000000);
    do
        cin >> pos;
    while (pos < 1 || pos > n);
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i != pos - 1)
            cout << a[i] << " ";
    }
}