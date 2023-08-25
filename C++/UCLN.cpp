#include "iostream"
using namespace std;
int main()
{
    cout << " Tim uoc chung lon nhat \n";
    int a, b;
    cout << " Nhap a: ";
    cin >> a;
    cout << " Nhap b: ";
    cin >> b;
    if (a <= b)
        for (int i = b; i >= 2; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                cout << " Uoc chung lon nhat cua a va b: " << i;
                break;
            }
        }
    else
        for (int i = a; i >= 2; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                cout << " Uoc chung lon nhat cua a va b: " << i;
                break;
            }
        }
}