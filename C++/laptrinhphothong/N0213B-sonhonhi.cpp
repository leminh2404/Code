#include "iostream"
using namespace std;
int main()
{
    long long *a = new long long[5];
    long long t, min = LLONG_MAX;
    for (int i = 0; i < 5; i++)
    {
        do
        {
            cin >> a[i];
        } while (a[i] < LLONG_MIN || a[i] > LLONG_MAX);
        if (a[i] < min)
            min = a[i];
    }
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    cout << a[1];
}