#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    int m=n;
    float S=0;
    for(int i=0; i<n; i++)
    {
        if(m==0)
            break;
        S=sqrt(S+m);
        m--;
    }
    cout << " " << S;
}