//Cho 2 số nguyên dương a và b. Tìm số chia hết cho b lớn nhất và không vượt qua a. Chú ý không dùng vòng lặp và các hàm có sẵn.
#include "iostream"
using namespace std;
int main()
{
    int a,b;
    cout << " Nhap 2 so nguyen: \n";
    cin >> a >> b;
    if (a%b==0) cout << " So chia het cho b lon nhat ko qua a la: " << a;
    else
    {
        int c=a%b;
        cout << " So chia het cho b lon nhat ko qua a la: " << a-c;
    }
}