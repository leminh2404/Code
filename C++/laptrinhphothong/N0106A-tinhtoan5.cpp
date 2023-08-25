#include "iostream"
#include "cmath"
#include "cstring"
using namespace std;
int main()
{
	string s = "";
	long long a, b;
	do
		cin >> a;
	while (a <= -1000000000 || a >= pow(10, 9));
	do
		cin >> b;
	while (b <= -1000000000 || b >= pow(10, 9));
	s += to_string(a + b + a * b);
	cout << s;
}
/**/