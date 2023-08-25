#include "bits/stdc++.h"
#include "cstdio"
#include "string.h"
#include "conio.h"
using namespace std;
typedef struct
{
    char hovaten[15];
    char gioitinh[5];
    char quequan[15];
    string masv[10];
    char lop[10];
}SinhVien;
void Nhap(SinhVien a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << " Ho va ten sinh vien thu "<<i+1<<": ";
		fflush(stdin);
		gets(a[i].hovaten);
		cout << " Gioi tinh: ";
		cin >> a[i].gioitinh;
		cout << " Que quan: ";
		fflush(stdin);
		gets(a[i].quequan);
		cout << " Ma sinh vien: ";
		cin >> a[i].masv;
		cout << " Lop: ";
		cin >> a[i].lop;
	}
}
void Xuat(SinhVien a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << " Ho va ten sinh vien thu "<<i+1<<" la: " << a[i].hovaten << ", Gioi tinh: " << a[i].gioitinh << ", Que quan: " << a[i].quequan << ", Ma sinh vien: " << a[i].masv << ", Lop: " << a[i].lop << endl;
	}
}
int main()
{
	SinhVien a[100];
	int n;
	do
	{
		cout << " Nhap so luong sinh vien can nhap: ";
		cin >> n;
	}
	while(n<=0||n>20);
	Nhap(a,n);
	Xuat(a,n);
	getch();
}

