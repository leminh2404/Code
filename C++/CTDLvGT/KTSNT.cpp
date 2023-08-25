#include "iostream"
#include "cmath"
using namespace std;
void kt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << " Day ko phai so nt";
            break;
        }
        else
            cout << " Day la so nt";
    }
}
int main()
{
    int n;
    cout << " Nhap so nguyen: ";
    cin >> n;
    if(n<=1)
    kt(n);
}