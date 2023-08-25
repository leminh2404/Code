#include "iostream"
#include "iomanip"
#include "conio.h"
#define for for (int i = 1; i <= x; i++)
using namespace std;
int main()
{
A:
	int x;
	do
	{
		cout << " Nhap so nguyen: ";
		cin >> x;
	} while (x <= 0);
	cout << " =================================================================== \n";
	cout << " || 1. Liet ke cac uoc so         2. Tinh tong cac uoc so         ||\n";
	cout << " || 3. Tinh tich cac uoc so       4. Dem so luong cac uoc         ||\n";
	cout << " || 5. Liet ke cac uoc so le      6. Tinh tong cac uoc so chan    ||\n";
	cout << " || 7. Tinh tich cac uoc so le    8. Dem so luong cac uoc so chan ||\n";
	cout << " ===================================================================\n";
B:
	int n;
	do
	{
		cout << " Nhap lua chon cua ban: ";
		cin >> n;
	} while (n < 1 || n > 8);
	int S = 0, T = 1, dem = 0;
	switch (n)
	{
	case 1:
		cout << " Cac uoc so cua " << x << ":";
			for
			{
				if (x % i == 0)
					cout << " " << i;
			}
			break;
	case 2:
		cout << " Tong cac uoc so cua " << x << " = ";
			for
			{
				if (x % i == 0)
					S += i;
			}
			cout << S;
			break;
	case 3:
		cout << " Tich cac uoc so cua " << x << " = ";
			for
			{
				if (x % i == 0)
					T *= i;
			}
			cout << T;
			break;
	case 4:
			for
			{
				if (x % i == 0)
					dem++;
			}
			cout << " " << x << " co " << dem << " uoc";
			break;
	case 5:
		cout << " Cac uoc so le cua " << x << " la:";
			for
			{
				if (x % i == 0 && i % 2 == 1)
					cout << " " << i;
			}
			break;
	case 6:
			for
			{
				if (x % i == 0 && i % 2 == 0)
					S += i;
			}
			cout << " Tong cac uoc so chan cua " << x << " = " << S;
			break;
	case 7:
			for
			{
				if (x % i == 0 && i % 2 == 1)
					T *= i;
			}
			cout << " Tich cac uoc so le cua " << x << " = " << T;
			break;
	case 8:
			for
			{
				if (x % i == 0 && i % 2 == 0)
					dem++;
			}
			cout << " " << x << " co " << dem << " uoc so chan";
			break;
	}
	int m;
	cout << "\n || 1. Nhap so nguyen khac  2. Nhap lua chon khac ||\n";
	do
	{
		cout << " Nhap lua chon: ";
		cin >> m;
	} while (m < 1 || m > 2);
	if (m == 1)
		goto A;
	else
		goto B;
}
