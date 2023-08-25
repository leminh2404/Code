#include "iostream"
#include "cstdlib"
using namespace std;
void maxx(long long* b, int m, int& j)
{
    long long max = b[0];
    for (int i = 0; i < m; i++)
        if (b[i] > max)
        {
            max = b[i];
            j = i;
        }
}
int main()
{
    int m, n;
    do
        cin >> m >> n;
    while (m <= 0 || n <= 0 || m > 200 || n > 200);
    int k;
    int a[m][n];
    long long* b = new long long[m];
    for (int i = 0; i < m; i++)
    {
        b[i] = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            b[i] += a[i][j];
        }
        maxx(b, m, k);
    }
    for (int i = 0; i < m; i++)
    {
        if (i != k)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}