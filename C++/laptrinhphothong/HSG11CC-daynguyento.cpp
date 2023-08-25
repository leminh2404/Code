#include "iostream"
using namespace std;
int gt(int n)
{
    if (n <= 1)
        return 1;
    return n * gt(n - 1);
}
int main()
{
    int n;
    do
        cin >> n;
    while (n < 0 || n > 12);
    cout << gt(n);
}