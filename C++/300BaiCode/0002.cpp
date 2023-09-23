#include "iostream"
#include "iomanip"
using namespace std;
int main()
{
    float n;
    cin >> n;
    cout << fixed << setprecision(2) << n * 2 * 3.14 << " "
         << fixed << setprecision(2) << n * n * 3.14;
}