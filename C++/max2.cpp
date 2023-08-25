#include "iostream"
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout << " Nhap 5 so nguyen:  \n";
    cin >> a >> b >> c >> d >> e;
    int max=a, max2=a;
    if(b>max)
    {
        max2=max;
        max=b;
    }
    else
    {
        if(b>max2)
        max2=b;
    }
    if(c>max)
    {
        max2=max;
        max=c;
    }
    else
    {
        if(c>max2)
        max2=c;
    }
    if(d>max)
    {
        max2=max;
        max=d;
    }
    else
    {
        if(d>max2)
        max2=d;
    }
    if(e>max)
    {
        max2=max;
        max=e;
    }
    else
    {
        if(e>max2)
        max2=e;
    }
    cout << " So lon thu 2:  " << max2;
}