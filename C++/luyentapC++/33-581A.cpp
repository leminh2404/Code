// Input
// Dòng duy nhất của đầu vào chứa hai số nguyên dương a và b (1 <=a, b<= 100) - số vớ màu đỏ và màu xanh mà Vasya có.
// Output
// In hai số nguyên cách nhau một khoảng trắng - số ngày tối đa khi Vasya có thể mang vớ khác nhau và số ngày anh ta có thể mang đôi tất cùng màu cho đến khi hết
// tất hoặc không thể tạo một đôi từ tất mà anh ta có.
// Hãy nhớ rằng vào cuối ngày, Vasya sẽ vứt bỏ tất mà anh ấy đang mang vào ngày hôm đó.
#include "iostream"
using namespace std;
int main()
{
    int a, b;
    cout << " Nhap lan luot so tat mau do va mau xanh: ";
    cin >> a >> b;
    if (a < b)
    {
        cout << " " << a << " " << (b - a) / 2;
    }
    else if (a == b)
    {
        cout << " " << a << " 0";
    }
    else
        cout << " " << b << " " << (a - b) / 2;
}