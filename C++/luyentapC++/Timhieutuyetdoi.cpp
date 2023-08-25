#include "iostream"
#include "cmath"
using namespace std;
int main()
{
	int n, max = INT_MIN, min = INT_MAX;
	cin >> n;
	bool *check = new bool[n + 1];
	int *a = new int[n];
	check[1] = false;
	for (int i = 2; i <= n; i++)
		check[i] = true;
	for (int i = 2; i <= n; i++)
		if (check[i])
			for (int j = 2 * i; j <= n; j += i)
				check[j] = false;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min && check[a[i]])
			min = a[i];
		if (a[i] > max && check[a[i]])
			max = a[i];
	}
}