#include "iostream"
#include "cmath"
int kt(int n)
{
	if (n <= 1)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
using namespace std;
int main()
{
	int n;
	cout << " Nhap n: ";
	cin >> n;
	int *check = new int[n + 1];
	for (int i = 2; i <= n; i++)
	{
		if (kt(i) == 1)
		{
			check[i] = 1;
			for (int j = 2; i * j <= n; j++)
				check[i * j] = 0;
		}
	}
	int t = n, dem = 0, i = 2, S = 1;
	while (1)
	{
		if (check[i] == 1)
		{
			if (t % i == 0)
			{
				t = t / i;
				dem++;
			}
			else
			{
				if (dem != 0 && dem != 1)
					cout << " " << i << "^" << dem;
				else if (dem != 0 && dem == 1)
					cout << " " << i;
				S = S * (dem + 1);
				dem = 0;
				i++;
				if (t == 1)
					break;
			}
		}
		else
			i++;
	}
	cout << "\n So vua nhap co: " << S << " uoc";
}