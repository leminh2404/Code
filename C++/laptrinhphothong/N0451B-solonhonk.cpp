#include "iostream"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n, k;
    do
        cin >> n;
    while (n <= 0 || n > 1000000);
    do
        cin >> k;
    while (k <= 0 || k > 1000000);
    int *a = new int[n];
    int t = INT_MAX;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        do
            cin >> a[i];
        while (a[i] > 1000000000);
        if (a[i] > k && a[i] < t)
        {
            t = a[i];
            dem++;
        }
    }
    if (dem == 0)
        cout << "-1";
    else
        cout << t;
}