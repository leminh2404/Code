#include "iostream"
using namespace std;
class Dongvat
{
	protected:
	string ten, loai;
	public:
	void Keu(string tiengkeu) {
		cout << "Tieng keu: " + tiengkeu;
	};
	void Nhap()
	{
		cout << "Nhap ten: ";
		cin >> ten;
		cout << "Nhap loai: ";
		cin >> loai;
	}
	void Xuat()
	{
		cout << "Ten: " << ten << ", loai: " << loai;
	}
};
class Meo : public Dongvat
{
	protected:
		string tiengkeu;
	public:
		string getTiengkeu()
		{
			return tiengkeu;
		}
		void setTiengkeu(string tiengkeu)
		{
			this->tiengkeu = tiengkeu;
		}
		void Nhap()
		{
			cout << "Nhap tieng keu: ";
			cin >> tiengkeu;
		}
		void Xuat()
		{
			cout << "\nTieng keu: " << tiengkeu;
		}
};

int main()
{
	Dongvat dv;
	Meo meo;
	meo.Nhap();
	meo.Xuat();
}