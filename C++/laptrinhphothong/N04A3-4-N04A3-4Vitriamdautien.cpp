#include "iostream"
#include "cstdlib"
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n > 1000000 || n <= 0);
    int *a = new int[n];
    int j = 0, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0 && i < min)
        {
            j = i;
            min = i;
        }
    }
    cout << j + 1;
}