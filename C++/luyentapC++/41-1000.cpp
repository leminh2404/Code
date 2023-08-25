#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    float S=1;
    for(int i=0; i<n; i++)
    {
        S=1/(S+1);
    }
    cout << " " << S;
}