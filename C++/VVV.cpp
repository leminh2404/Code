#include "iostream"
#include "conio.h"
#define for for (int i = 0; i < n; i++)
using namespace std;
void nhap(int *a, int n)
{
	for
	{
		cout << " a[" << i << "]= ";
		cin >> a[i];
	}
}
void xuat(int *a, int n)
{
	int *p;
	p = a;
	for
	{
		cout << *p << " ";
		p++;
	}
}
int main()
{
	int n;
	cout << " Nhap n: ";
	cin >> n;
	int *a = new int[n];
	nhap(a, n);
	xuat(a, n);
	getch();
}
