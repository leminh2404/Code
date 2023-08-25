// Nap chong toan tu de hien thi so phuc
#include "iostream"
#include "cmath"
#include "windows.h"
using namespace std;
class SoPhuc {
	private:
		float thuc, ao;

	public:
		friend istream &operator >> (istream &in, SoPhuc &);
		friend ostream &operator << (ostream &out, SoPhuc);
		SoPhuc operator + (SoPhuc);
		SoPhuc operator - (SoPhuc);
		SoPhuc operator * (SoPhuc);
		SoPhuc operator / (SoPhuc);
		SoPhuc() {
			this->thuc = 1;
			this->ao = 2;
		}
		~SoPhuc() {
			this->thuc = 1;
			this->ao = 2;
		}
};
class PhanSo {
	private:
		int ts, ms;

	public:
		friend istream& operator >> (istream& in, PhanSo&);
		friend ostream& operator << (ostream& out, PhanSo);
		PhanSo operator+(PhanSo);
		PhanSo operator-(PhanSo);
		PhanSo operator*(PhanSo);
		PhanSo operator/(PhanSo);
		PhanSo() {
			this->ts=1;
			this->ms=2;
		}
		~PhanSo() {
			this->ts=1;
			this->ms=2;
		}
};
istream &operator >> (istream &in, PhanSo &a) {
	cout << " Nhap tu so: ";
	in >> a.ts;
	cout << " Nhap mau so: ";
	in >> a.ms;
	return in;
}
ostream &operator << (ostream &out, PhanSo a) {
	int dem=0;
	if(a.ms <= a.ts) {
		for(int i = a.ms*-1; i>=2; i--) {
			if(a.ms % i == 0 && a.ts % i == 0) {
				dem = i;
				break;
			}
		}
	} else
		for(int i = a.ts*-1; i>=2; i--) {
			if(a.ms % i == 0 && a.ts % i == 0) {
				dem = i;
				break;
			}
		}
	if(dem == 0) {
		out << " " << a.ts << "/" << a.ms << endl;
		return out;
	} else {
		out << " " << a.ts << "/" << a.ms << "" << " -> Phan so rut gon: " << a.ts/dem << "/" << a.ms/dem << "" << endl;
		return out;
	}
}
PhanSo PhanSo::operator + (PhanSo a) {
	PhanSo tong;
	tong.ts = this->ts * a.ms + a.ts * this->ms;
	tong.ms = this->ms * a.ms;
	return tong;
}
PhanSo PhanSo::operator - (PhanSo a) {
	PhanSo hieu;
	hieu.ts = this->ts * a.ms - a.ts * this->ms;
	hieu.ms = this->ms * a.ms;
	return hieu;
}
PhanSo PhanSo::operator * (PhanSo a) {
	PhanSo nhan;
	nhan.ts = this->ts * a.ts;
	nhan.ms = this->ms * a.ms;
	return nhan;
}
PhanSo PhanSo::operator / (PhanSo a) {
	PhanSo chia;
	chia.ts = this->ts * a.ms;
	chia.ms = this->ms * a.ts;
	return chia;
}
istream &operator >> (istream &in, SoPhuc &a) {
	cout << " Nhap phan thuc: ";
	in >> a.thuc;
	cout << " Nhap phan ao: ";
	in >> a.ao;
	return in;
}
ostream &operator << (ostream &out, SoPhuc a) {
	if(a.ao>=0)
		out << " " << a.thuc << " + " << a.ao << "i" << endl;
	else
		out << " " << a.thuc << " - " << a.ao*-1 << "i" << endl;
	return out;
}
SoPhuc SoPhuc::operator + (SoPhuc a) {
	SoPhuc tong;
	tong.ao = this->ao + a.ao;
	tong.thuc = this->thuc + a.thuc;
	return tong;
}
SoPhuc SoPhuc::operator - (SoPhuc a) {
	SoPhuc hieu;
	hieu.ao = this->ao - a.ao;
	hieu.thuc = this->thuc - a.thuc;
	return hieu;
}
SoPhuc SoPhuc::operator * (SoPhuc a) {
	SoPhuc nhan;
	nhan.thuc = this->thuc * a.thuc - this->ao * a.ao;
	nhan.ao = this->thuc * a.ao + this->ao * a.thuc;
	return nhan;
}
SoPhuc SoPhuc::operator / (SoPhuc a) {
	SoPhuc chia;
	chia.thuc = (this->thuc * a.thuc + this->ao * a.ao) / (pow(a.thuc, 2) + pow(a.ao, 2));
	chia.ao = (this->ao * a.thuc - this->thuc * a.ao) / (pow(a.thuc, 2) + pow(a.ao, 2));
	return chia;
}
int main() {
	SoPhuc a, b;
	cin >> a >> b;
	SoPhuc tong = a + b, hieu = a - b, nhan = a * b, chia = a / b;
	cout << "\n Tong a + b: " << tong << " Hieu a - b: " << hieu;
	cout << " Nhan a * b = " << nhan << " Chia a / b = " << chia;
	PhanSo c, d;
	cin >> c >> d;
	PhanSo t = c + d, h = c - d, tt = c*d, ch = c/d;
	cout << "\n Tong c + d = " << t << " Hieu c - d = " << h;
	cout << " Tich c * d = " << tt << " Thuong c / d = " << ch;
}
