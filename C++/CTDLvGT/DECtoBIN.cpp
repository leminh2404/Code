#include "iostream"
#include "stack"
using namespace std;
int main()
{
	stack<int> C;
	int n;
	cout << " Nhap n: ";
	cin >> n;
	while (n != 0)
	{
		C.push(n % 2);
		n = n / 2;
	}
	cout << " ";
	while (!C.empty())
	{
		cout << C.top();
		C.pop();
	}
}