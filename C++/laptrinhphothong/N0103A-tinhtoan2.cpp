#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    long long n;
    do
        cin >> n;
    while (n <= 0 || n > pow(10, 12));
    cout << n * 3;
}