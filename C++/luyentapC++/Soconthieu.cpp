#include "iostream"
using namespace std;
void input(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap ptu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}
int min(int *a, int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int max(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int find(int *a, int n)
{
    int t = min(a, n), ma = max(a, n), mi = min(a, n), k;
    for (int i = mi; i < ma; i++)
    {
        k = 0;
        t++;
        for (int j = 0; j < n; j++)
        {
            if (a[i] - t != 0)
            {
                k++;
            }
        }
        if (k == n)
        {
            return t;
            break;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    int *a = new int[n];
    input(a, n);
    if (find(a, n) != -1)
        cout << find(a, n);
    else
        cout << " Khong tim thay!";
}