#include "iostream"
#include "string"
using namespace std;
int main()
{
    A:char n;
    cout << "\n Nhap ki tu: ";
    fflush(stdin);
    cin >> n;
    if(n>='a'&&n<='z')
    cout << " YES";
    else
    cout << " NO";
    goto A;
}