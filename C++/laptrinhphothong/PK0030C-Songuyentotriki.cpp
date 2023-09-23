#include "iostream"
#include "array"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int a[5];
	array<int, 5> a;
	a.fill(10);
	for(int i = 0; i < 5; i++)
	cout << a[i] << " ";
}