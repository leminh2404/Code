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
    cout << " Nhap n: ";
    cin >> n;
    float S=0;
    for(int i=0; i<n; i++)
    {
        S=pow(S+gt(i+1),(float)1/(i+2));
    }
    cout << " " << S;
}