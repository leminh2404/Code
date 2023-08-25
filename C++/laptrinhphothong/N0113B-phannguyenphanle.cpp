#include <iostream>
#include <string>
using namespace std;

int main()
{
    string X;
    int i;
    cin >> X;
    for (i = 0; i < X.size(); i++)
    {
        if (X[i] != '.')
            cout << X[i];
        else
            break;
    }
    cout << " 0";
    for (; i < X.size(); i++)
        cout << X[i];
    return 0;
}