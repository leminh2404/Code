#include "iostream"
#include "cmath"
using namespace std;
long long gt(int n)
{
    if (n == 1)
        return 1;
    return n * gt(n - 1);
}
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n > pow(10, 9));
    long long res = gt(n) / (2 * gt(n - 2));
    cout << 2 * res;
}