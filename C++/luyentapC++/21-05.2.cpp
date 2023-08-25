#include "bits/stdc++.h"
#include "string.h"
#include "stdlib.h"
using namespace std;
typedef struct
{
	char makh[15];
	char hovaten[20];
	char dc[15];
	int sdtt;
} HGDDD;
void Nhap(HGDDD *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " Nhap ho va ten khach hang thu " << i + 1 << ": ";
		fflush(stdin);
		gets(a[i].hovaten);
		cout << " Nhap ma khach hang thu " << i + 1 << ": ";
		fflush(stdin);
		gets(a[i].makh);
		cout << " Nhap dia chi cua khach hang thu " << i + 1 << ": ";
		fflush(stdin);
		gets(a[i].dc);
		cout << " Nhap so dien tieu thu: ";
		cin >> a[i].sdtt;
	}
}
void Xuat(HGDDD *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " + Ho va ten cua khach hang thu " << i + 1 << " la " << a[i].hovaten << ", ma khach hang la " << a[i].makh << ", dia chi la " << a[i].dc << ", so dien tieu thu la " << a[i].sdtt << endl;
	}
}
void sdnh100(HGDDD *a, int n)
{
	int kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].sdtt < 100)
			kt++;
	}
	if (kt != 0)
	{
		cout << "\n Danh sach ho gia dinh co so dien tieu thu nho hon 100 la: \n";
		for (int i = 0; i < n; i++)
		{
			if (a[i].sdtt < 100)
			{
				cout << " + " << a[i].hovaten << ", " << a[i].makh << ", " << a[i].dc << endl;
			}
		}
	}
	else
		cout << "\n Khong co ho gia dinh nao co so dien tieu thu nho hon 100";
}
void timkiem(HGDDD *a, int n)
{
	int kt = 0;
	char b[20];
	cout << "\n Nhap ten khach hang can tim kiem: ";
	fflush(stdin);
	gets(b);
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].hovaten, b) == 0)
			kt++;
	}
	if (kt != 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (strcmp(a[i].hovaten, b) == 0)
				cout << " + Ma khach hang: " << a[i].makh << ", dia chi: " << a[i].dc << ", so dien tieu thu: " << a[i].sdtt << endl;
		}
	}
	else
		cout << "\n Khong tim thay ten khach hang!";
}
int main()
{
	HGDDD *a;
	int n;
	cout << "\n Nhap so ho gia dinh dung dien can nhap thong tin: ";
	cin >> n;
	a = (HGDDD *)malloc(n * sizeof(HGDDD));
	Nhap(a, n);
	Xuat(a, n);
	sdnh100(a, n);
	timkiem(a, n);
}
