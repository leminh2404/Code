#include "iostream"
#include "cmath"
using namespace std;
int kt(int n) {
	if(n<=1)
		return 0;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main() {
	int n;
	cout <<  " Nhap n: ";
	cin >> n;
	for(int i=2; i<=n; i++) {
		if(kt(i)==1)
			cout << " " << i;
	}
}