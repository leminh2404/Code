#include "iostream"
#include "cmath"
using namespace std;
int gt(int n)
{
    if(n==1)
        return 1;
    return n*gt(n-1);
}
int main()
{
    int n;
    float S=0;
    cout << " Nhap n: ";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        S=sqrt(S+gt(i));
    }
    cout << " " << S;
}