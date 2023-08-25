#include "iostream"
#include "cstring"
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    string s = to_string(a + b * c);
    cout << s;
}