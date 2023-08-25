#include "iostream"
using namespace std;
int main()
{
    cout << " Tim boi chung nho nhat \n";
    int a,b;
    cout << " Nhap a: ";
    cin >> a;
    cout << " Nhap b: ";
    cin >> b;
    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            cout << " BCNN cua a va b: " << i;
            break;
        }
    }
}