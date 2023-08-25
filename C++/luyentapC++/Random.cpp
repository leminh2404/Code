#include "iostream"
#include "cstdlib"
using namespace std;
int main() {
	int i=0;
	while(i!=10) {
		int res = rand() % (10 - 0 + 1) + 0;
		cout << " " << res;
		i++;
	}
	return 0;
}