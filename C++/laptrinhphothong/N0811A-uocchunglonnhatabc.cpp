#include "iostream"
using namespace std;
int min1(int a, int b) {
	if(a < b)
		return a;
	return b;
}
int min2(int a, int b, int c) {
	int min = min1(a , b);
	if(min < c)
		return min;
	return c;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a, b, c, res;
	cin >> a >> b >> c;
	int min = min2(a, b, c);
	for(int i = 1; i <= min; i++)
		if(a % i == 0 && b % i == 0 && c % i == 0)
			res = i;
	cout << res;
}