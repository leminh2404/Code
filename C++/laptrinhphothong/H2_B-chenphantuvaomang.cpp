#include "iostream"
#include "cstdlib"
using namespace std;
void input(int *a, int n, int pos, int x)
{
    for (int i = 0; i < n + 1; i++)
    {
        if (i == pos - 1)
        {
            a[i] = x;
            continue;
        }
        cin >> a[i];
    }
}
void traverse(int *a, int n)
{
    for (int i = 0; i < n + 1; i++)
        cout << a[i] << " ";
}
int main()
{
    int n, pos, x;
    do
    {
        cin >> n;
    } while (n <= 0 || n > 1000000);
    do
    {
        cin >> pos;
    } while (pos <= 0 || pos > n);
    cin >> x;
    int *a = new int[n + 1];
    input(a, n, pos, x);
    traverse(a, n);
}