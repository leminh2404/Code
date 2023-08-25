#include "iostream"
#include "cmath"
using namespace std;
int main()
{
	int n;
	cout << " Nhap n: ";
	cin >> n;
	int m = 1;
	float S=0;
	for(int i=0;i<n;i++)
	{
		S=sqrt(S+m);
		m++;
	}
	cout << " " << S;
}