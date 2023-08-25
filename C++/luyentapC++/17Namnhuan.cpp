#include "iostream"
using namespace std;
int main()
{
    int n;
    cout << " Nhap nam can kiem tra: ";
    cin >> n;
    if(n<=0)
    cout << " INVALID";
    else if(n%400==0||(n%4==0&&n%100!=0))
    cout << " YES";
    else
    cout << " NO";
}