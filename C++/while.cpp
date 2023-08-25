#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int n;
    int tong = 0;
    printf("Nhap vao n = ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n)
    {
        tong = tong + i;
        i++;
    }
    printf("\nTong = %d", tong);
    while (1)
    {
        cout << " Like\n";
    }
}
