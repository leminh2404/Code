// 1/(1*2) + 1/(2*3) + 1/(3*4) + ... + 1/(n*(n+1))
#include "iostream"
using namespace std;
float tong3(int n)
{
    if (n == 1) return 0.5;
    return (float)1/(n*(n+1)) + (float)tong3(n-1); // lưu ý phải ép kiểu do giá trị return chưa được định dạng kiểu dữ liệu
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    float x=tong3(n);
    cout << " Tong 3 = " << x;
}