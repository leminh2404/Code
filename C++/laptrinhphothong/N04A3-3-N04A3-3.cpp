#include "iostream"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long n;
	cin >> n;
	long long *a = new long long[n];
	long long res;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i] > 0)
			res = a[i];
	}
	cout << res;
}