#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int m, n;
    do
    {
        cin >> m >> n;
    } while (n < 1 || m > 2 * pow(10, 5));
    int *a = new int[m];
    int *b = new int[n];
    for (int i = 0; i < m; i++)
    {
        do
        {
            cin >> a[i];
        } while (a[i] > pow(10, 9));
    }
    for (int i = 0; i < n; i++)
    {
        do
        {
            cin >> b[i];
        } while (b[i] > pow(10, 9));
    }
    int t;
    for (int i = 0; i < n; i++)
    {
        t = 0;
        while (1)
        {
            if (b[i] <= a[t])
                b[i] = a[t];
            continue;
        }
    }
}
/*Thành phố X tổ chức chương trình hòa nhạc. Ban tổ chức đã chuẩn bị n chỗ ngồi, mỗi chỗ ngồi sẽ có một vé được phát ra để bán cho khách với một số tiền nhất định.

Vé bắt đầu được mở bán, m khách hàng lần lượt đến. Mỗi khách hàng thông báo mức giá tối đa mà họ sẵn sàng trả cho một chiếc vé và sau đó, họ sẽ nhận được một vé với mức giá gần nhất có thể sao cho nó không vượt quá mức giá tối đa.

Vé đã bán ra cho khách hàng đến trước không thể thu hồi lại để bán cho khách hàng sau.

Yêu cầu
Viết chương trình tính giá vé mà mỗi khách hàng phải trả để lấy vé.
Dữ liệu
Dòng đầu tiên ghi hai số nguyên m, n (1<=n,m<=2∗105)
Dòng thứ hai ghi m số nguyên cách nhau một dấu cách trống là giá n vé.
Dòng thứ 3 ghi n số nguyên cách nhau một dấu cách trống là số tiền tối đa mà khách hàng chịu chi trả.
Các giá trị nhập vào là giá vé có số tiền tối đa không quá 109

Kết quả
In ra giá vé mà mỗi khách hàng sẽ trả cho vé của họ. Mỗi giá trị trên một dòng.
Nếu khách hàng không lấy được vé nào, in ra -1.
Ví dụ
input
5 3
5 3 7 8 5
4 8 3
output
3
8
-1*/