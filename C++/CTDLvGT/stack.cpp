#include "iostream"
#include "stack"
using namespace std;
int main()
{
    stack<int> C;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        C.push(i + 1);
    }
    while (!C.empty())
    {
        cout << " " << C.top();
        C.pop();
    }
}