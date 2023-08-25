#include "iostream"
#include "cstdlib"
using namespace std;
void input(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 1)
        {
            for (int x = 0; x <= i - 1; x++)
                for (int y = x + 1; y <= i; y++)
                    if (a[x] > a[y])
                        swap(a[x], a[y]);
        }
    }
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
    cout << a[n / 2];
}
/**/