#include <iostream>
#include <string>

using namespace std;

string multiply(string num1, int num2)
{
    int carry = 0;
    string result = "";

    for (int i = num1.length() - 1; i >= 0; i--)
    {
        int digit = num1[i] - '0';
        int prod = digit * num2 + carry;
        carry = prod / 10;
        result = char(prod % 10 + '0') + result;
    }

    if (carry > 0)
    {
        result = char(carry + '0') + result;
    }

    return result;
}

string factorial(int n)
{
    string result = "1";

    for (int i = 2; i <= n; i++)
    {
        result = multiply(result, i);
    }

    return result;
}

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    string gt = factorial(n);
    cout << "Giai thua cua " << n << " la: " << gt << endl;

    return 0;
}