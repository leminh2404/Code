#include "iostream"
using namespace std;
int main()
{
    long a, b;
    cin >> a >> b;
    int n = (a * b) % 100;
    if (n % 3 == 0)
        cout << "YES";
    else
        cout << "NO";
}