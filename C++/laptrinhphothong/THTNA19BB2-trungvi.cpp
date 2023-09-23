#include "iostream"
#include "cstdlib"
using namespace std;
void input(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void QuickSort(int *a, int left, int right)
{
    int i, j, x;
    x = a[(left + right) / 2];
    i = left;
    j = right;
    while (i < j)
    {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (left < j)
        QuickSort(a, left, j);
    if (i < right)
        QuickSort(a, i, right);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n;
    do
        cin >> n;
    while (n % 2 != 1);
    int *a = new int[n];
    input(a, n);
    QuickSort(a, 0, n - 1);
    cout << a[n / 2];
}