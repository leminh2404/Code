#include "iostream"
#define for for(int i=0;i<n;i++)
using namespace std;
int main() {
	int n;
	cout << " Nhap n: ";
	cin >> n;
	int *a = new int [n];
	for {
	cout << " Nhap a["<<i<<"] = ";
	cin >> a[i];
	}
	cout << " Mang vua nhap la:";
	for {
	cout << " " << a[i];
	}
	int x;
	cout << "\n Nhap x: ";
	cin >> x;
	int max = a[0] - x;
	for {
	if(a[i]-x>max) {
			max=a[i]-x;
		}
	}
	for {
	if(a[i]-max==x) {
			cout << " Phan tu cach x xa nhat la " << a[i] << " voi khoang cach " << max;
			break;
		}
	}
}
