#include "iostream"
using namespace std;
int main()
{
    long long n;
    do
        cin >> n;
    while (n <= 0 || n > 1000000);
    int d = n % 3;
    if (d == 0)
        n = n - 3;
    else
        n = n - d;
    long long size = (n - 3) / 3 + 1;
    cout << (n + 3) * size / 2;
}