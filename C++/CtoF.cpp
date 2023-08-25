#include "iostream"
using namespace std;
int main()
{
    cout << "  1. C sang F   2. F sang C \n";
    int n;
    do
    {
        cout << " Nhap lua chon: ";
        cin >> n;
    }while(n<1||n>2);
    if(n==1)
    {
        float x;
        cout << " Nhap do C: ";
        cin >> x;
        cout << " "<<x<<"'C = " << x*1.8+32 << "'F";
    }
    else if(n==2)
    {
        float x;
        cout << " Nhap do F: ";
        cin >> x;
        cout << " "<<x<<"'F = " << (x-32)/1.8 << "'C";
    }
    return 0;
}