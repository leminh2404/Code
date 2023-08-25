#include "iostream"
#include "cmath"
using namespace std;
class PhanSo {
	private:
		int ts, ms;

	public:
		friend istream &operator>>(istream &in, PhanSo &);
		friend ostream &operator<<(ostream &out, PhanSo);
		PhanSo operator+(PhanSo);
};
istream &operator>>(istream &in, PhanSo &a) {
	cout << " Nhap tu so: ";
	in >> a.ts;
	cout << " Nhap mau so: ";
	in >> a.ms;
	return in;
}
ostream &operator<<(ostream &out, PhanSo a) {
	int t;
	out << " Phan so vua nhap: " << a.ts << "/" << a.ms << endl;
	if (a.ts <= a.ms)
		for (int i = a.ms; i >= 2; i--) {
			if (a.ts % i == 0 && a.ms % i == 0) {
				t = i;
				break;
			}
		} else
		for (int i = a.ts; i >= 2; i--) {
			if (a.ts % i == 0 && a.ms % i == 0) {
				t = i;
				break;
			}
		}
	out << " Phan so toi gian: " << a.ts / t << "/" << a.ms / t;
	return out;
}
PhanSo PhanSo::operator+(PhanSo a) {
	PhanSo tong;
	tong.ts = this->ts * a.ms + this->ms * a.ts;
	tong.ms = this->ms * a.ms;
	return tong;
}
int main() {
	PhanSo a, b;
	cin >> a >> b;
	cout << a + b;
}