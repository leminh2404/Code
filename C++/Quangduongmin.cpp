// 1 buoc co the di dc 1,2,3,4,5 don vi. Tim so buoc di toi thieu
#include "iostream"
using namespace std;
int main()
{
    int n;
    do
    {
        cout << " Nhap quang duong: ";
        cin >> n;
    }while(n<=0);
    cout << " So buoc di toi thieu: ";
    if(n<=5) cout << "1";
    else
    {
        int dem=1;
        for(int a=n-5;a<n;a-=5)
        {
            if(a<=5)
            {
                dem++;
                break;
            }
            else if(a>5)
            {
                dem++;
            }
        }
        cout << " " << dem;
    }
}