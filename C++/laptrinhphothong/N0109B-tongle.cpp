#include "iostream"
using namespace std;
int main()
{
    long long n;
    do
    {
        cin >> n;
    } while (n > 1000000000 || n < 0);
    long long N = (2 * n + 2) / 2;
    long long S = (2 * n + 2) * N / 2;
    cout << S;
}