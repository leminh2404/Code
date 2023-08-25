/**3 3 3 3 3 3 3
   3 2 2 2 2 2 3
   3 2 1 1 1 2 3
   3 2 1 0 1 2 3
   3 2 1 1 1 2 3
   3 2 2 2 2 2 3
   3 3 3 3 3 3 3**/
#include "iostream"
using namespace std;
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    int **a = new int *[2 * n + 1];
    for (int i = 0; i < 2 * n + 1; i++)
        a[i] = new int[2 * n + 1];
    for (int i = 0; i < 2 * n + 1; i++)
    {
        for (int j = 0; j < 2 * n + 1; j++)
        {
            a[i][j] = n;
        }
    }
    int m = n, t = 0;
    for (int i = 0; i < n; i++)
    {
        t++;
        m--;
        for (int j = 0; j < 2 * n + 1; j++)
        {
            if (i == j)
            {
                a[i][j] = m;
                a[i][2 * n - t] = m;
            }
        }
    }
    int x = n;
    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (j > i && j < 2 * n)
                a[i][j] = x;
        }
        if (i < n)
            x--;
        else if (i > n)
            x++;
    }
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cout << "\n";
        for (int j = 0; j < 2 * n + 1; j++)
            cout << " " << a[i][j];
    }
}
