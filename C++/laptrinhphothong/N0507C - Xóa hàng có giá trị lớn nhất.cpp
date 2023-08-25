#include "iostream"
#include "cstdlib"
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int** a = new int* [m];
    for (int i = 0; i < m; i++)
        a[i] = new int[n];
}