#include "iostream"
using namespace std;
int main()
{
    long long n;
    do
    {
        cin >> n;
    } while (n > 1000000);
    long long S = (n * (n + 1) * (2 * n + 1) / 6);
    cout << S;
}