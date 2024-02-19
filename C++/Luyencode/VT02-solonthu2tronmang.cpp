#include "iostream"
#include "cstdlib"
using namespace std;
void input(int *a, int n, int &max2) {
    int max;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i == 0) {
            max = a[i];
            max2 = a[i];
        }
        if(a[i] >= max)
        {
            max = a[i];
        }
        else
            max2 = a[i];
    }
}
int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    int res;
    input(a, n, res);
    cout << res;
}