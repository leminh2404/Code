#include "iostream"
using namespace std;
void sum(int a, int b, int &c)
{
	c = a + b;
}
int main()
{
	int a, b, c;
	cin >> a >> b;
	int c = sum(a, b, c);
	cout << c;
}