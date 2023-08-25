#include "iostream"
#include "cmath"
using namespace std;
int main()
{
	int n;
	float S=0;
	cout << " Nhap n: ";
	cin >> n;
	for(int i=0;i<n;i++)
	{
		S=sqrt(S+2);
	}
	cout << " " << S;
}