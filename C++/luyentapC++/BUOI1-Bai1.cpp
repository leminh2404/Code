#include "iostream"
#include "cstdlib"
using namespace std;
int n;
void input(int *a)
{
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void output(int *a)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void del(int *a, int k)
{
    for (int i = k - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
}
int max(int *a)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
int min(int *a)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}
int dema(int *a)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] < 0)
            dem++;
    return dem;
}
int maxa(int *a)
{
    int minn = min(a, n);
    if (min(a, n) >= 0)
        return 0;
    if (max(a, n) < 0)
        return max(a, n);
    for (int i = 0; i < n; i++)
        if (a[i] < 0 && a[i] > minn)
            minn = a[i];
    return minn;
}
int mind(int *a)
{
    int maxx = max(a, n);
    if (max(a, n) <= 0)
        return 0;
    if (min(a, n) > 0)
        return min(a, n);
    for (int i = 0; i < n; i++)
        if (a[i] > 0 && a[i] < maxx)
            maxx = a[i];
    return maxx;
}
void find(int *a, int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            dem++;
    if (dem == 0)
        cout << "\n Ko tim thay!";
    else
        cout << "\n x co trong mang!";
}
int main()
{
    int n;
    cout << " Nhap n: ";
    cin >> n;
    int *a = new int[n];
    input(a, n);
    cout << "\n 1. Xuat mang";
    cout << "\n 2. Xoa phan tu tai vi tri k";
    cout << "\n 3. Tim max";
    cout << "\n 4. Tim min";
    cout << "\n 5. Dem so phan tu am";
    cout << "\n 6. Tim gia tri am lon nhat";
    cout << "\n 7. Tim gia tri duong nho nhat";
    cout << "\n 8. Tim phan tu x";
    cout << "\n 0. Thoat";
    int b, k, x;
    while (b != 0)
    {
        cout << "\n Nhap lua chon: ";
        cin >> b;
        switch (b)
        {
        case 1:
            output(a, n);
            break;
        case 2:
            cout << "\n Nhap vi tri muon xoa: ";
            cin >> k;
            del(a, n, k);
            break;
        case 3:
            cout << "\n Phan tu lon nhat trong mang: " << max(a, n);
            break;
        case 4:
            cout << "\n Phan tu nho nhat trong mang: " << min(a, n);
            break;
        case 5:
            cout << "\n So phan tu am: " << dema(a, n);
            break;
        case 6:
            cout << " So am lon nhat trong mang: " << maxa(a, n);
            break;
        case 7:
            cout << "\n So duong nho nhat trong mang: " << mind(a, n);
            break;
        case 8:
            cout << "\n Nhap x: ";
            cin >> x;
            find(a, n, x);
            break;
        case 0:
            break;
        default:
            break;
        }
    }
}