#include "iostream"
#include "cmath"
#include "ctime"
using namespace std;
int kt(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    clock_t start, end;
    double time;
    int m, n;
    int S = 0;
    cin >> m >> n;
    start = clock();
    if (m > n)
    {
        bool *check = new bool[n + 1];
        for (int i = 2; i <= n; i++)
            check[i] = true;
        for (int i = 2; i <= n; i++)
        {
            if (check[i] == true)
            {
                if (kt(i) == 1)
                    for (int j = 2; i * j <= n; j++)
                        check[i * j] = false;
            }
        }
        for (int i = 2; i <= n; i++)
            if (check[i] == true)
                if (m % i == 0 && n % i == 0)
                    S += i;
        cout << " " << S;
    }
    else
    {
        bool *check = new bool[m + 1];
        for (int i = 2; i <= m; i++)
            check[i] = true;
        for (int i = 2; i <= m; i++)
        {
            if (check[i] == true)
            {
                if (kt(i) == 1)
                    for (int j = 2; i * j <= m; j++)
                        check[i * j] = false;
            }
        }
        for (int i = 2; i <= m; i++)
            if (check[i] == true)
                if (m % i == 0 && n % i == 0)
                    S += i;
        cout << " " << S;
    }
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "\n " << time;
    return 0;
}