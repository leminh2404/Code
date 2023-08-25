#include "iostream"
#include "cstdlib"
#include "cmath"
using namespace std;
bool kt(int n)
{
	if (n <= 1)
		return false;
	for (int i= 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	int N;
	do
	{
		cin >> N;
	}
	while (N < 0 || N > 10000);
	int *a = new int[N + 1];
	int t = INT_MAX, j, dem = 0;
	for (int i = 1; i <= N; i++)
	{
		do
		{
			cin >> a[i];
		}
		while (a[i] >= 32767 || a[i] <= -32767);
		if (i > 2)
		{
			if (kt(a[i - 2]) == true && i < t && kt(a[i]) == true)
			{
				t = i - 1;
				j = i - 1;
				dem++;
			}
		}
	}
	if (dem != 0)
		cout << j;
	else
		cout << "0";
}