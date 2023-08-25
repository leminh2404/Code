#include "iostream"
#include "stack"
#include "cstring"
#include "cstdlib"
using namespace std;
struct SinhVien
{
	int masv;
	string hoten;
	string lop;
	friend ostream &operator<<(ostream &out, struct SinhVien);
};
typedef struct SinhVien SV;
void createdata(SV &a)
{
	cout << " Nhap ma sinh vien: ";
	cin >> a.masv;
	cout << " Nhap ho ten: ";
	cin.ignore();
	getline(cin, a.hoten);
	cout << " Nhap lop: ";
	getline(cin, a.lop);
}
ostream &operator<<(ostream &out, SV a)
{
	out << " Ma sinh vien: " << a.masv << ", ho ten: " << a.hoten << ", lop: " << a.lop;
	return out;
}
int main()
{
	stack<SV> C;
	int n;
	cout << " Nhap n: ";
	cin >> n;
	SV *a = new SV[n];
	for (int i = 0; i < n; i++)
	{
		createdata(a[i]);
		C.push(a[i]);
	}
	while (!C.empty())
	{
		cout << "\n " << C.top();
		C.pop();
	}
}