#include "iostream"
#include "vector"
#include "cstring"
using namespace std;
struct SV
{
	string hoten;
	string masv;
	string qq;
	float dtb;
};
int main()
{
	vector<SV> QLSV;
	int n;
	cout << " Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		SV a;
		cout << " Nhap ho ten sinh vien thu " << i + 1 << ": ";
		fflush(stdin);
		getline(cin, a.hoten);
		cout << " Nhap ma sinh vien thu " << i + 1 << ": ";
		fflush(stdin);
		getline(cin, a.masv);
		cout << " Nhap que quan sinh vien thu " << i + 1 << ": ";
		fflush(stdin);
		getline(cin, a.qq);
		cout << " Nhap diem trung binh sinh vien thu " << i + 1 << ": ";
		cin >> a.dtb;
		QLSV.push_back(a);
	}
	int p;
	do
	{
		cout << " Nhap vi tri can them: ";
		cin >> p;
	} while (p >= QLSV.size() || p < 0);
	SV a;
	cout << " Nhap ho ten: ";
	fflush(stdin);
	getline(cin, a.hoten);
	cout << " Nhap ma sinh vien: ";
	fflush(stdin);
	getline(cin, a.masv);
	cout << " Nhap que quan: ";
	fflush(stdin);
	getline(cin, a.qq);
	cout << " Nhap diem trung binh: ";
	cin >> a.dtb;
	QLSV.insert(QLSV.begin() + p, a);
	int pos;
	do
	{
		cout << " Nhap vi tri can xoa: ";
		cin >> pos;
	} while (pos >= QLSV.size() || pos < 0);
	QLSV.erase(QLSV.begin() + pos);
	for (int i = 0; i < QLSV.size(); i++)
	{
		cout << QLSV[i].hoten << ", " << QLSV[i].masv << ", " << QLSV[i].qq << ", " << QLSV[i].dtb << endl;
	}
}
