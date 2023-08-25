#include "iostream"
using namespace std;
int main()
{
	int n;
	cout << " Nhap so giay: ";
	cin >> n;
	cout << " " << (n / 60) / 60 << " gio, " << (n / 60) % 60 << " phut, " << n % 60 << " giay";
	return 0;
}