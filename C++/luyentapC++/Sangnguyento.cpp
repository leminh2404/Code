#include "iostream"
#include "cmath"
#include "ctime"
int kt(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
using namespace std;
int main()
{
    clock_t start, end;
    double time;
    int n;
    cin >> n;
    bool *check = new bool[n + 1];
    for (int i = 2; i <= n; i++)
        check[i] = true;
    for (int i = 2; i <= n; i++)
    {
        if (check[i] == true)
            for (int j = 2 * i; j <= n; j += i)
                check[j] = false;
    }
    for (int i = 2; i <= n; i++)
        if (check[i] == true)
            cout << i << " ";
    end = clock();
    time = double(end - start) / CLOCKS_PER_SEC;
    cout << "\n " << time;
}