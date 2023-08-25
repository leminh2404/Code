/**Cho một số nguyên dương K. Nhiệm vụ của bạn là tìm số lượng các cặp số
nguyên dương ( a , b ) trong đó 1 <= a < b < K và a + b <= K
Đầu vào : Dòng đầu tiên của đầu vào chứa số nguyên T cho biết số bộ dữ liệu
cần kiểm tra . Mỗi bộ dữ liệu gồm một dòng chứa số nguyên K
Đầu ra : Ứng với mỗi bộ dữ liệu đầu vào , chương trình của bạn cần in ra một
dòng chứa số cặp số tìm được
Ràng buộc : 1<= T <=100 ; 0 <= K<=10^5 
Ví dụ: 
Input: 3      Output: 0
       2              2
       4              4
       5
       **/
























#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int n;
    do
    {
        cout << " Nhap so cac so muon nhap: ";
        cin >> n;
    } while (n < 1 || n > 100);
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout << " Nhap so thu " << i + 1 << ": ";
            cin >> a[i];
        } while (a[i] < 0 || a[i] > pow(10, 5));
    }
    for (int i = 0; i < n; i++)
    {
        int t = a[i];
        if (t == 0 || t == 1 || t == 2)
            cout << " 0\n";
        else
        {
            int a = 1, b = 2, dem = 0;
            while (a + b <= t)
            {
                dem++;
                b++;
                if (a + b == t)
                {
                    a++;
                    b = a + 1;
                    dem++;
                }
            }
            cout << " " << dem << "\n";
        }
    }
}