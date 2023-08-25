#include "iostream"
using namespace std;
void thamtri(int i)
{
    i = 10;
}
void thamchieu(int &i)
{
    i = 15;
}
int main()
{
    int n;
    n = 5;
    cout << " " << n;
    thamtri(n);
    cout << "\n " << n;
    thamchieu(n);
    cout << "\n " << n;
}