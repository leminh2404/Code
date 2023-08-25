#include "iostream"
#include "cmath"
using namespace std;
bool kt(long long n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    long long n;
    cin >> n; 
    if (kt(n))
        cout << "YES";
    else
        cout << "NO";
}