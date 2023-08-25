#include "iostream"
#include "cstdlib"
#include "cstring"
using namespace std;
class SACH {
	private:
		string mas, tens;    // Khong cho phep truy cap o ngoai thi phai de vao private
	public:
		SACH() {     // Ham khoi tao
			this->mas = "0";
			this->tens = " ";
		}
		~SACH() {    // Ham huy - Neu ko yeu cau thi viet cung duoc
			this->mas = "0";
			this->tens = " ";
		}
		friend istream &operator >> (istream&, SACH&); // Nap chong toan tu cho ham nhap
		friend ostream &operator << (ostream&, SACH); // Nap chong toan tu cho ham xuat
		friend void nhap(SACH &);    // Ham nhap - Theo cach truyen tham so  /C1/
		friend void xuat(SACH);    // Ham xuat - Theo cach truyen tham so /C1/
/*C2*/	void input();    // Ham nhap - Theo cach tao bien cua Class, void input() luc nay ko phai la ham, ma la bien cua Class SACH, nen ko the dung nhu ham binh thuong de truyen tham so vao
/*C2*/	void output(); 		// Ham xuat - Nhu note cua void input()
};
void nhap(SACH &a) {   		// theo cach C1, truyen tham so vao ham
	cout << " Nhap ma sach: ";
	getline(cin,a.mas);
	cout << " Nhap ten sach: ";
	fflush(stdin);
	getline(cin,a.tens);
}
void xuat(SACH a) {   		// theo cach C1, truyen tham so vao ham
	cout << " Ma sach: " << a.mas << ", ten sach: " << a.tens << endl;
}
void SACH::input() {  		// theo cach C2, tao bien cua class
	cout << " Nhap ma sach: ";
	cin >> mas;
	cout << " Nhap ten sach: ";
	fflush(stdin);
	getline(cin,tens);
}
void SACH::output() { 		// theo cach C2, tao bien cua class
	cout << " Ma sach: " << mas << ", ten sach: " << tens << endl;
}
istream &operator >> (istream &in, SACH& a) {  		// Nap chong toan tu cho ham nhap
	cout << " Nhap ma sach: ";
	fflush(stdin);  		// May cai nhap ten co dau cach thi dung cai fflush(stdin) nay
	getline(in,a.mas); 		//getline dung de nhap cho string, binh thuong thi getline(cin,tenbien), nhung day la ham nap chong nen dung getline(in,tenbien)
	cout << " Nhap ten sach: ";
	fflush(stdin); 
	getline(in,a.tens);
	return in;
}
ostream &operator << (ostream &out, SACH a) {  		// Nap chong toan tu cho ham xuat
	out << " Ten sach: "<<a.tens<<", ma sach: "<<a.mas<<"" << endl;  		// Giong nhu printf(" .... %d", tenbien) de truyen gia tri tenbien thay the cho %d cua C, thi C++ dung "<<tenbien<<" de hien thi gia tri cua bien ma ko can truyen
	return out;
}
int main() {
	/* Nhap va xuat thong tin 1 cuon sach theo cach C1 - truyen tham so vao ham*/
	SACH a; 		// Khai bao bien cua class SACH, cung giong nhu "int a" la khai bao bien kieu du lieu int
	cout << " * Nhap theo cach C1 - Truyen tham so vao ham\n";
	nhap(a); 		// truyen tham so "a" vao ham nhap(), theo cach C1
	cout << " * Xuat theo cach C1: \n";
	xuat(a); 		// truyen tham so "a" vao ham xuat(), theo cach C1
	/* Nhap va xuat thong tin 1 cuon sach theo cach C2 - tao bien cua class*/
	SACH b; 		// Khai bao bien cua class
	cout << " *  Nhap theo cach C2 - Tao bien cua class\n";
	b.input(); 		// do ham input() la bien cua class da duoc khai bao o tren, nen de bien "b" truy cap vao bien cua class thi phai dung dau "."
	cout << " * Xuat theo cach C2 \n";
	b.output(); 		// tuong tu note o tren
	int n;
	cout << " Nhap n: ";
	cin >> n;
	SACH *c = new SACH [n]; 		// cap phat bo nho dong cho class SACH co "n" phan tu, cap phat theo C++
	cout << " * Nhap danh sach theo cach C2 - Tao bien cua class \n";
	for(int i=0; i<n; i++) {
		c[i].input(); 		// Nhap thong tin cho tung bien c[i], giong nhu b.input()
	}
	cout << " * Xuat danh sach theo cach C2: - Tao bien cua class\n";
	for(int i=0;i<n;i++) {
		c[i].output(); 		// Xuat thong tin danh sach da nhap, giong b.output()
	}
	cout << " * Nhap danh sach theo cach nap chong ham nhap: \n";
	for(int i=0; i<n; i++) { 		// Tao vong lap for de tao cac bien c[0], c[1], ... c[n] cua class SACH
		cin >> c[i]; 		// Nhap thong tin danh sach theo nap chong ham nhap - istream
	}
	cout << " * Xuat danh sach theo cach nap chong ham xuat: \n";
	for(int i=0; i<n; i++) { 		// Xuat thong tin danh sach theo nap chong ham xuat - ostream
		cout << c[i];
	}
}