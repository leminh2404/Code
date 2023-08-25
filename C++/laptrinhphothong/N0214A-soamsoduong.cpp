#include "iostream"
using namespace std;
int main()
{
    long long n;
    do
        cin >> n;
    while (n == 0);
    if (n > 0)
        cout << "+";
    else
        cout << "-";
}