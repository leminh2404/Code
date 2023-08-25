#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    cout << " In ra man hinh day so nguyen to nho hon n" << endl;
    int n;
    cout << " Nhap so nguyen bat ki: ";
    cin >> n;
    if(n<=2) cout << " Ko co so nguyen to nho hon 2";
    else
    {
        cout << " 2";
        for(int x=3;x<=n;x++)
        {
            int dem=0;
            for(int i=2;i<=sqrt(x);i++)
            {
                if(x%i==0) dem++;
            }
            if(dem==0) cout << " " << x;
            else continue;
        }
    }   
}
