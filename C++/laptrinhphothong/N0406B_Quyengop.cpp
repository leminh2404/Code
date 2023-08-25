#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int N;
    do
    {
        cin >> N;
    } while (N > pow(10, 6));
    int *a = new int[N + 1];
    int max = INT_MIN, dem;
    for (int i = 1; i <= N; i++)
    {
        do
        {
            cin >> a[i];
        } while (a[i] > pow(10, 5));
        if (a[i] > max)
        {
            dem = 0;
            max = a[i];
        }
        if (a[i] == max)
            dem++;
    }
    cout << dem;
    cout << "\n"
         << max;
}