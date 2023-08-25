#include "iostream"
using namespace std;
int main()
{
    long long n;
    do
        cin >> n;
    while (n <= 0 || n > 100000000);
    cout << (n + 1) * n / 2;
}