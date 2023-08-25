#include "iostream"
#include "cstring"
using namespace std;
int main()
{
    string s;
    int n;
    do
        cin >> n;
    while (n <= 0 || n > 1000);
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            for (int i = 0; i < n; i++)
                s += "$";
        else
        {
            for (int i = 0; i < n; i++)
                s += "$";
            s += '\n';
        }
    }
    cout << s;
}