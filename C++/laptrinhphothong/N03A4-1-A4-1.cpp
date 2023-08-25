#include "iostream"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    do
        cin >> n;
    while (n <= 0 || n > 100000);
    long long *a = new long long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
        cout << a[i] * a[i] << "\n";
}