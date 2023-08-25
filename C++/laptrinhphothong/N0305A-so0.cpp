#include "iostream"
#include "cstdlib"
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n <= 0 || n > 1000);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "0";
            if (j == i)
                break;
        }
        cout << "\n";
    }
}