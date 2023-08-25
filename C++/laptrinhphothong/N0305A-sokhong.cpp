#include "iostream"
using namespace std;
int main()
{
    int n;
    do
        cin >> n;
    while (n <= 0 || n > 1000);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "0";
        cout << "\n";
    }
}