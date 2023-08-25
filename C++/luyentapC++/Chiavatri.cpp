#include "iostream"
using namespace std;
// Tinh tong 1 mang
int sum(int *a, int left, int right)
{
    int T = 0;
    for (int i = left; i <= right; i++)
        T += a[i];
    return T;
}
// Chia de tri tinh tong cac phan tu trong mang
int devideAndconquer(int *a, int left, int right)
{
    if (left == right)
        return a[left];
    else
    {
        int mid = left + (right - left) / 2;
        int leftSum = devideAndconquer(a, left, mid);
        int rightSum = devideAndconquer(a, mid + 1, right);
        int crossingSum = sum(a, left, right);
        return max(max(leftSum, rightSum), crossingSum);
    }
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
    int res = devideAndconquer(a, 0, n - 1);
    cout << "Tong lon nhat cua day so la: " << res << endl;
    return 0;
}