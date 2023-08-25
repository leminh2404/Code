#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    float phi = (1 + sqrt(5)) / 2;
    cin >> n;
    long long *a = new long long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = (pow(phi, a[i]) - pow(1 - phi, a[i])) / sqrt(5);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << "\n";
}