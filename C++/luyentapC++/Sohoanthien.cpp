#include "iostream"
#include "cmath"
using namespace std;
int main()
{
	long long n;
	cout << " Nhap n: ";
	cin >> n;
	cout << " Day so hoan thien <= n:";
	for (int i = 1; i <= n; i++)
	{
		long long T = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				T += j;
		}
		if (T == i)
			cout << " " << i;
	}
}
