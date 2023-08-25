#include "iostream"
#include "conio.h"
using namespace std;
int main()
{
    int n;
    do
    {
        cout << " Nhap n: ";
        cin >> n;
    }while(n<=0||n>=50);
    cout << " W";
    for(int i=0;i<n;i++)
    {
        cout << "o";
    }
    cout << "w";
    getch();
}
