#include "bits/stdc++.h"
#include "math.h"
using namespace std;
void snt(int n, int *a)
{
    int *p;
    p=a;
    cout << " Kiem tra so nguyen to\n Nhap day so can kiem tra:\n";
    for(int i=0;i<n;i++)
    {
        cout << " a["<<i<<"] = ";
        cin >> *(a+i);
    }
    int i=0;
    cout << " Ket qua:\n";
    do
    {
    for(int j=2;j<=sqrt(*p);j++)
    {
        int dem=0;
        if(*p%j==0)
        dem++;
        if(dem==0)
        {
            cout << " a["<<i<<"]: YES \n";
        }
        else
        {
            cout << " a["<<i<<"]: NO \n";
        }
    }p++;i++;
    }while(i<n);
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    int *a = new int;
    snt(n,a);
}