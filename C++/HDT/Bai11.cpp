#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
class Monhoc
{
private:
	string mamh;
	string tenmh;
	float dtb;
	int sotc;

public:
	Monhoc()
	{
		mamh = " ";
		tenmh = " ";
		dtb = 0;
		sotc = 0;
	}
	~Monhoc()
	{
		mamh = " ";
		tenmh = " ";
		dtb = 0;
		sotc = 0;
	}
	void nhap();
	void xuat();
};
void Monhoc::nhap()
{
	cout << " Nhap ma mon hoc: ";
	fflush(stdin);
	getline(cin, mamh);
	cout << " Nhap ten mon hoc: ";
	fflush(stdin);
	getline(cin, tenmh);
	cout << " Nhap diem trung binh: ";
	cin >> dtb;
	cout << " Nhap so tin chi: ";
	cin >> sotc;
}
void Monhoc::xuat()
{
	cout << "\n Ma mon hoc: " << mamh << ", ten mon hoc: " << tenmh << ", diem trung binh: " << dtb << ", so tin chi: " << sotc;
}
int main()
{
	int n;
	cout << " Nhap n: ";
	cin >> n;
	Monhoc *a = new Monhoc[n];
	for (int i = 0; i < n; i++)
	{
		a[i].nhap();
	}
	for (int i = 0; i < n; i++)
	{
		a[i].xuat();
	}
	return 0;
}