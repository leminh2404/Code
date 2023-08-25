#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int x, n;
    cout << " Nhap x: ";
    cin >> x;
    cout << " Nhap n: ";
    cin >> n;
    float S=0;
    for(int i=0; i<n; i++)
    {
        S=sqrt(S+pow(x,i+1));
    }
    cout << " " << S;
}