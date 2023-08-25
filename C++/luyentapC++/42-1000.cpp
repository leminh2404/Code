/*Cho n l� s? nguy�n duong. H�y t�m gi� tr? nguy�n duong k l?n nh?t sao
cho S(k) < n. Trong d� chu?i S(k) du?c d?nh nghia nhu sau : S(k) = 1 +
2 + 3 + � + k.*/
#include "iostream"
using namespace std;
int S(int n)
{
    if(n==1)
        return 1;
    return n+S(n-1);
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    int k;
    for(int i=n; i>=1; i--)
    {
        if(S(i)<n)
        {
            k=i;
            break;
        }
    }
    cout << " " << k;
}