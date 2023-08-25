#include "iostream"
#include "iomanip"
#include "cmath"
using namespace std;
int main()
{
    float n;
    cout << " Nhap n: ";
    cin >> n;
    double *a = new double[(int)n];
    double *b = new double[(int)n];
    cout << " Nhap cot x: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << " Nhap cot n: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];
    double N = 0, S3 = 0, S4 = 0;
    for (int i = 0; i < n; i++)
    {
        N += b[i];
        S3 += a[i] * b[i];
        S4 += pow(a[i], 2) * b[i];
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << setw(3) << left << "" << a[i] << "" << setw(4) << left << "" << b[i] << "" << setw(4) << left << "" << a[i] * b[i] << "" << setw(5) << left << "" << a[i] * a[i] * b[i] << "" << '\n';
    cout << setw(7) << left << "" << N << "" << setw(4) << left << "" << S3 << "" << setw(5) << left << "" << S4 << "";
    double X_ = S3 / N;
    double S_2 = (N / (N - 1)) * ((S4 / N) - pow(X_, 2));
    double SS = sqrt(S_2);
    cout << '\n'
         << " Xtb = " << X_ << '\n'
         << " S^2 = " << S_2 << '\n'
         << " S = " << SS;
    float p;
    cout << "\n Nhap μ₀: ";
    cin >> p;
    float G = (X_ - p) * sqrt(N) / SS;
    cout << ""
            " Gqₛ = "
         << G;
}