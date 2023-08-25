#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    long long N, x;
    do
    {
        cin >> N >> x;
    }
    while(x>=N || N> pow(10,18) || x<=0);
    long long dem;
    if(1%x == 0)
        dem = N/x - 1/x + 1;
    else
        dem = N/x - 1/x ;
    cout << N-dem;
}