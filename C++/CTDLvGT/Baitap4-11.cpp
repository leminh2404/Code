#include "iostream"
#include "cstring"
#include "cstdlib"
#include "stack"
using namespace std;
typedef struct date
{
	int ngay, thang, nam;
} date;
typedef struct hang
{
	char id[6];
	char ten[256];
	date ngay_xuat;
	float gia_xuat;
	friend istream &operator>>(istream &, struct hang &);
	friend ostream &operator<<(ostream &, struct hang);
	struct hang operator==(string);
} HANG;
istream &operator>>(istream &in, struct hang &a)
{
	cout << " Nhap id: ";
	in >> a.id;
	cout << " Nhap ten: ";
	fflush(stdin);
	gets(a.ten);
	cout << " Nhap ngay, thang, nam xuat hang: ";
	in >> a.ngay_xuat.ngay >> a.ngay_xuat.thang >> a.ngay_xuat.nam;
	cout << " Nhap gia xuat: ";
	in >> a.gia_xuat;
	cout << "\n";
	return in;
}
ostream &operator<<(ostream &out, struct hang a)
{
	out << "+ ID: " << a.id << "\n+ ten hang: " << a.ten << "\n+ Ngay xuat hang: " << a.ngay_xuat.ngay << "/" << a.ngay_xuat.thang << "/" << a.ngay_xuat.nam << ""
		<< "\n+ Gia xuat: " << a.gia_xuat << endl;
	return out;
}
HANG HANG::operator==(string s)
{
	cout << "\n+++ Thong tin hang co ma 001: \n";
	cout << "+ ID: " << id << "\n+ ten hang: " << ten << "\n+ Ngay xuat hang: " << ngay_xuat.ngay << "/" << ngay_xuat.thang << "/" << ngay_xuat.nam << ""
		 << "\n+ Gia xuat: " << gia_xuat << endl;
}
int main()
{
	HANG a;
	cin >> a;
	cout << a;
	int n;
	cout << " Nhap n: ";
	cin >> n;
	stack<HANG> HH;
	stack<HANG> HH2;
	HANG *b = new HANG[n];
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		HH.push(b[i]);
	}
	HH2 = HH;
	string s = "001";
	while (!HH2.empty())
	{
		HH2.top() == s;
		HH2.pop();
	}
	cout << " Thong tin hang hoa: \n";
	while (!HH.empty())
	{
		cout << HH.top() << "\n";
		HH.pop();
	}
}
