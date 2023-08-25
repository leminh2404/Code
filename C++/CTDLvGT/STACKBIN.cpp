#include "iostream"
#include "stack"
using namespace std;
int main()
{
    stack<int> BN;
    int n;
    cin >> n;
    while (n != 0)
    {
        BN.push(n % 2);
        n /= 2;
    }
    while (!BN.empty())
    {
        cout << BN.top();
        BN.pop();
    }
}