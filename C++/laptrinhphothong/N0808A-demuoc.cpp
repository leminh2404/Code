#include "iostream"
using namespace std;
int main()
{
    long long n;
    do
    {
        cin >> n;
    } while (n <= 0 || n > 1000000000000);
    int S = 1, dem;
    for (int i = 2; i <= n; i++)
    {
        dem = 0;
        while (n % i == 0)
        {
            n /= i;
            dem++;
        }
        S *= (dem + 1);
    }
    cout << S;
} /**/