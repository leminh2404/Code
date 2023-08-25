// a gap hon 3 lan tuoi b. Sau bao lau a gap doi tuoi b?
#include "iostream"
using namespace std;
int main()
{
    int a, b;
    do
    {
        cout << " Nhap lan luot tuoi a va b: \n";
        cin >> a >> b;
    }while(a<=3*b);
    int dem=0;
    for(int i=1;i<a*b;i++)
    {
        a++;b++;
        if(a==2*b)
        {
            dem=i;
            break;
        }
    } 
    cout << " " << dem;
}