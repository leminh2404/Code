#include "iostream"
#include "cmath"
using namespace std;
int main()
{
	int n;
	cout << " Nhap n: ";
	cin >> n;
	float S=0;
	for(int i=1;i<n;i++)
	{
		S=pow(S+i+1,(float)1/(i+1));
	}
	cout << " " << S;
}