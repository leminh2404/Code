#include "iostream"
#include "vector"
using namespace std;
int main()
{
    vector<int> list;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        list.push_back(a);
    }
    long long Sle = 0, Schan = 0;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i] % 2 == 0)
            Schan += list[i];
        if (list[i] % 2 == 1)
            Sle += list[i];
    }
    cout << " Tong cac phan tu chan cua vector: " << Schan << "";
    cout << "\n Tong cac phan tu le cua vector: " << Sle << "";
}