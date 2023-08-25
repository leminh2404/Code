#include "iostream"
using namespace std;
int main()
{
    int a,b;
    cout << " Nhap 2 so nguyen: \n";
    cin >> a >> b;
    if(a%b==0)
    cout << " So chia nho nhat lon hon hoac bang a : " << a;
    else
    cout << " So chia nho nhat lon hon hoac bang a: " << a + b - a%b;
}