#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    float S=n;
    while(S>2)
    {
        S/=2;
    }
    if((int)S==S)
        cout << " So vua nhap co dang 2^k!";
    else
        cout << " So vua nhap ko co dang 2^k!";
}