#include "iostream"
#include "cmath"
#include "cstring"
#include "cstdlib"
using namespace std;
int main()
{
    long long n;
    do
        cin >> n;
    while (n <= 0 || n > pow(10, 18));
    string s = to_string(n);
    int S = 0;
    for (int i = 0; i < s.size(); i++)
    {
        S += (int)(s[i] - '0');
    }
    cout << S;
}